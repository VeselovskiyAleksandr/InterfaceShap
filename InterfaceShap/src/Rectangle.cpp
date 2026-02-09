#include "Rectangle.h"

using namespace std;


void Rectangle :: setParametr(double firstParam, double secondParam, double thirdParam)
	{
		firstParametr = firstParam;
		secondParametr = secondParam;
	}

double Rectangle :: getFirstParametr()
	{
		return firstParametr;
	}

double  Rectangle :: getSecondParametr()
	{
		return secondParametr;
	}

double Rectangle :: getThirdParametr()
	{
		return thirdParametr;
	}

double Rectangle :: squareShape()
	{
		square = getFirstParametr() * getSecondParametr();
		return square;
	};

string Rectangle :: type()
	{
		string str = " Rectangle.";
		return str;
	}

BoundingBoxDimensions Rectangle :: dimensions()
	{
		boundingBoxRectangle.width = firstParametr;
		boundingBoxRectangle.height = secondParametr;
		cout << "\nWidth of the enclosing rectangle: " << boundingBoxRectangle.width;
		cout << "\nHeight of the enclosing rectangle: " << boundingBoxRectangle.height;
		return boundingBoxRectangle;
	}