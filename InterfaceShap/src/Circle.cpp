#include "Circle.h"

using namespace std;


 void Circle :: setParametr(double firstParam, double secondParam, double thirdParam)
	{
		firstParametr = firstParam;
	}

 double Circle::getFirstParametr()
	{
		return firstParametr;
	}

double Circle :: getSecondParametr()
	{
		return secondParametr;
	}

double Circle :: getThirdParametr()
	{
		return thirdParametr;
	}

double Circle :: squareShape()
	{
		square = pi * getFirstParametr() * getFirstParametr();
		return square;
	};

string Circle :: type()
	{
		string str = " Circle.";
		return str;
	}

BoundingBoxDimensions  Circle :: dimensions()
	{
		boundingBoxCircle.width = 2 * firstParametr;
		boundingBoxCircle.height = 2 * firstParametr;
		cout << "\nWidth of the enclosing rectangle: " << boundingBoxCircle.width;
		cout << "\nHeight of the enclosing rectangle: " << boundingBoxCircle.height;
		return boundingBoxCircle;
	}
