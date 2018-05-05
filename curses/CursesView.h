#pragma once

/*

	Тут весь вывод на экран и получения реакции от игрока

*/

#include <vector>

#include "View.h"
#include "Point.h"


class Control;
class Rabbit;


class CursesView : virtual public View 
{
public:
    CursesView();
    ~CursesView();

	int getHieghtField();
	int getWigthField();

	void setHieght(int);
	void setWigth(int);

	int getSystemHieght();
	int getSystemWigth();

	void getCommands();

	void beforeGame();
	void endGame(int);

private:
	typedef enum {EMPTY = 1, HEAD, BODY, BODY2, RABBIT, POINT} Draw;	//TODO: не удачное название Draw
	typedef enum {FRAME = Draw::POINT+1, DIALOG} Color;

    void drawDraw(Point &, Draw);

	void initColors();

	int m_hieght;
	int m_wigth;

protected:
    void beforePaintField();
    void afterPaintField(); 
    void paintWay();
    void paintSnake();
    void paintRabbit(Rabbit &);
    
};