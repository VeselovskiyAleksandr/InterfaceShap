// InterfaceShap.cpp: определяет точку входа для приложения.
//
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "PrintParams.h"

using namespace std;

int main()
{
	double firstPar = 0, secondPar = 0, thirdPar = 0;
	Shape* shape;
	Circle circle;
	do {
		cout << "\nSpecify the radius of the circle.";
		cin >> firstPar;
		if (firstPar <= 0)
			cout << "\nThe radius of the circle is indicated incorrectly.";
	} while (firstPar <= 0);
	circle.setParametr(firstPar, 0, 0);
	printParams(&circle);
	Rectangle rectangle;
	do {
		cout << "\nSpecify the length of the rectangle.";
		cin >> firstPar;
		cout << "\nSpecify the width of the rectangle.";
		cin >> secondPar;
		if (firstPar <= 0 || secondPar <= 0)
			cout << "\nThe sides of the rectangle are indicated incorrectly.";
	} while (firstPar <= 0 || secondPar <= 0);
	rectangle.setParametr(firstPar, secondPar, 0);
	printParams(&rectangle);
	Triangle triangle;
	do {
		cout << "\nSpecify the first side of the triangle.";
		cin >> firstPar;
		cout << "\nSpecify the second side of the triangle.";
		cin >> secondPar;
		cout << "\nSpecify the third side of the triangle.";
		cin >> thirdPar;
		if (firstPar <= 0 || secondPar <= 0 || thirdPar <= 0)
			cout << "\nThe sides of the triangle are indicated incorrectly.";
		else if (((firstPar + secondPar)<= thirdPar) || ((firstPar + thirdPar) <= secondPar) || ((secondPar + thirdPar) <= firstPar))
			cout << "\nThere is no triangle with the given sides.";
	} while ((firstPar <= 0 || secondPar <= 0 || thirdPar <= 0) || ((firstPar + secondPar) <= thirdPar) || ((firstPar + thirdPar) <= secondPar) || ((secondPar + thirdPar) <= firstPar));
	triangle.setParametr(firstPar, secondPar, thirdPar);
	printParams(&triangle);
	return 0;
}