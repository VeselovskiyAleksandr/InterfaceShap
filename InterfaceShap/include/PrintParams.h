#pragma once
#include "shape.h"

using namespace std;

void printParams(Shape* shape)
{
	cout << "\nFigure: " << shape->type();
	cout << "\nSquare: " << shape->squareShape();
	shape->dimensions();
}
