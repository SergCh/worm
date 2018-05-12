#pragma once

/**
 * @file config
 * @brief %{Cpp:License:ClassName}
 * @author Чугайнов С.В.
 * @date 12.05.2018
 *
 *
 */


//#include "Model.h"
#include "Point.h"
#include "GraphicPoint.h"
#include "TSnake.h"
#include "GraphicSnake.h"

//class GraphicPoint;
//class GraphicSnake;

template <class TSnake> class TModel;

//typedef TSnake<Point> Snake;
typedef GraphicSnake Snake;


//#include "GraphicSnake.h"
//#include "Model.h"


//typedef GraphicSnake Snake;

typedef TModel<Snake> Model;
