#pragma once
#include "shape.h"

using namespace std;

class Circle : virtual public Shape
{
protected:
	double pi = 4 * atan(1);
public:
	virtual void setParametr(double firstParam, double secondParam, double thirdParam);
	virtual double getFirstParametr();
	virtual double getSecondParametr();
	virtual double getThirdParametr();
	virtual double squareShape();
	virtual string type();

	BoundingBoxDimensions boundingBoxCircle;
	virtual BoundingBoxDimensions dimensions();
};
