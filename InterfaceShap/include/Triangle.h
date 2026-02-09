#pragma once
#include "shape.h"

using namespace std;

class Triangle : virtual public Shape
{
public:
	virtual void setParametr(double firstParam, double secondParam, double thirdParam);
	virtual double getFirstParametr();
	virtual double getSecondParametr();
	virtual double getThirdParametr();
	virtual double squareShape();
	virtual string type();

	BoundingBoxDimensions boundingBoxTriangle;
	virtual BoundingBoxDimensions dimensions();
};