#include "Triangle.h"


void Triangle :: setParametr(double firstParam, double secondParam, double thirdParam)
	{
		firstParametr = firstParam;
		secondParametr = secondParam;
		thirdParametr = thirdParam;
	}

double Triangle :: getFirstParametr()
	{
		return firstParametr;
	}

double Triangle :: getSecondParametr()
	{
		return secondParametr;
	}

double Triangle :: getThirdParametr()
	{
		return thirdParametr;
	}

double Triangle :: squareShape()
	{
		double perimeter = (getFirstParametr() + getSecondParametr() + getThirdParametr());
		square = sqrt((perimeter / 2) * (perimeter / 2 - getFirstParametr()) * (perimeter / 2 - getSecondParametr()) * (perimeter / 2 - getThirdParametr()));
		return square;
	};

string Triangle :: type()
	{
		string str = " Triangle.";
		return str;
	}

BoundingBoxDimensions Triangle :: dimensions()
	{
		boundingBoxTriangle.width = (firstParametr * secondParametr * thirdParametr) / (2 * squareShape());
		boundingBoxTriangle.height = (firstParametr * secondParametr * thirdParametr) / (2 * squareShape());
		cout << "\nWidth of the enclosing rectangle: " << boundingBoxTriangle.width;
		cout << "\nHeight of the enclosing rectangle: " << boundingBoxTriangle.height;
		return boundingBoxTriangle;
	}