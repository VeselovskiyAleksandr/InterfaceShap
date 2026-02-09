#pragma once
#include <iostream>
#include <clocale>
#include <string>
#include <cmath>
#include "BoundingBoxDimensions.h"

using namespace std;

class Shape
{
protected:
	double square = 0, firstParametr = 0, secondParametr = 0, thirdParametr = 0;
public:
	virtual double squareShape() = 0;
	virtual BoundingBoxDimensions dimensions() = 0;
	virtual string type() = 0;
	virtual void setParametr(double firstParam, double secondParam, double thirdParam) = 0;
	virtual double getFirstParametr() = 0;
	virtual double getSecondParametr() = 0;
	virtual double getThirdParametr() = 0;
};