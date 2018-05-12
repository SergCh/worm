#pragma once

/**
 * @file config
 * @brief %{Cpp:License:ClassName}
 * @author Чугайнов С.В.
 * @date 12.05.2018
 *
 *
 */


#include "Point.h"
#include "GraphicPoint.h"
#include "TSnake.h"
#include "GraphicSnake.h"


template <class TSnake> class TModel;

typedef GraphicSnake Snake;
typedef TModel<Snake> Model;
