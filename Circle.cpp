//Emmanuelle Esters
//Lab9out
//More Shapes

#include <iostream>
#include <cmath>
#include "graph1.h" 
#include "Shape.h"
#include "Circle.h"


Circle::Circle()
{
	int radius = 0;
	GenPoint center(0, 0);
	//const static double PI = 3.1415926;
	double pi = 3.1415926;
}
Circle::Circle(GenPoint center, int radius, Color c)
{
	this->radius = radius;
	this->center.setPoint(center.getX(), center.getY());
	color.setColor(c.getRed(), c.getGreen(), c.getBlue());
}
void Circle::setCenter(GenPoint center)
{
	this->center = center;
}
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getPerimeter()
{
	int perimeter = 0;

	perimeter = 2 * pi * radius; 

	return perimeter;
}
double Circle::getArea()
{
	int area = 0;

	area = pi * pow(radius, 2);

	return area;
}
void Circle::print()
{
	gout << setPos(0, 400)
		<< "----------------------------------------------------------------------------------------------------------------------------"
		endg;
	gout << setPos(200, 405) << "Shape info Follows for: Circle" << endg;
	gout << setPos(200, 420) << "Center Point: (" << center.getX() << "," << center.getY() << ")" << endg;
	gout << setPos(200, 435) << "Radius: " << radius << endg;
	gout << setPos(200, 450) << "Perimeter: "<< getPerimeter() << endg;
}
void Circle::draw()
{
	int circle = 0;

	circle = drawCircle(radius, center.getX(), center.getY());
	::setColor(circle, color.getRed(), color.getGreen(), color.getBlue());
}