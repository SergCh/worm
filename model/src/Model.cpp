//#include "StdAfx.h"
#include <algorithm>

//#include <cstdlib>
//#include <ctime>

#include "Model.h"
#include "RabbitFactory.h"

//Model::Model(Point _size, RabbitFactory &_rabbits) : m_size(_size), m_rabbits(_rabbits) {
//}

//Model::~Model(void) {
//}

//void Model::init() {
//    std::srand(unsigned(std::time(0)));
//    m_rabbits.clear();
//    m_snake.clear();
//    int x = m_size.getX() / 2, y = m_size.getY() / 2;
//    m_snake.addNewHead(Point(x+1, y));
//    m_snake.addNewHead(Point(x, y));
//    m_way = Way::LEFT;
//    m_length = 0;
//    m_stateGame = Model::GOOD;
//}

std::pair<Model::StateGame, Model::StateSnake> Model::move() {

    if (m_stateGame == Model::DEAD)
        return std::make_pair(Model::DEAD, Model::NOT_CHANGED);

    Point newHead = m_snake.front();                 // голова змея
    newHead += m_way.getPoint();

	if (!newHead.between(m_size))
        return std::make_pair(m_stateGame=Model::DEAD, Model::NOT_CHANGED);

    if (!m_snake.checkPoint(newHead))
        return std::make_pair(m_stateGame=Model::DEAD, Model::NOT_CHANGED);

    m_length += m_rabbits.eat(newHead);

    m_snake.addNewHead(newHead);                // двигаем червя

    Model::StateSnake stateSnake = Model::MOVED;
    if (m_length < 0) {                         // длина змея уменьшилась
        m_snake.removeTail(2);
        m_length++;
        stateSnake = Model::MOVED_SHOTER;
    } else if (m_length == 0) {                 // не изменилась длина
        m_snake.removeTail(1);
    } else {                                    // длина змея увеличилась
        m_length--;
        stateSnake = Model::ADDED;
    }

    if (m_snake.size() < 2)                     // если осталась одна голова, то змей тоже умер
        return std::make_pair(m_stateGame=Model::DEAD, Model::NOT_CHANGED);

    return std::make_pair(Model::GOOD, stateSnake);
}

//void Model::addRabbit() {
//    m_rabbits.newRabbit(m_size, m_snake);
//}

//std::vector<Rabbit> & Model::getRabbits() {
//    return m_rabbits.data();                 // неределать на передачу фабрики
//}
