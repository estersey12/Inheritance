//Emmanuelle Esters
//Lab9out
//More Shapes

#include <iostream>
#include "graph1.h" 
#include "Shape.h"
#include "Triangle.h"

Triangle::Triangle()
{
	GenPoint zeroSet(0, 0);
	setPoints(zeroSet, zeroSet, zeroSet);
}
Triangle::Triangle(GenPoint a, GenPoint b, GenPoint c, Color color)
{

}
void Triangle::setPoints(GenPoint a, GenPoint b, GenPoint c)
{
	//set a
	if (a.getX() > 639)
	{
		this->a.setPoint(639, a.getY());
	}
	else if (a.getX() < 0)
	{
		this->a.setPoint(0, a.getY());
	}
	else if (a.getY() > 399)
	{
		this->a.setPoint(a.getX(), 399);
	}
	else if (a.getY() < 0)
	{
		this->a.setPoint(a.getX(), 0);
	}
	else
	{
		this->a.setPoint(a.getX(), a.getY());
	}

	//set b
	if (b.getX() > 639)
	{
		this->b.setPoint(639, b.getY());
	}
	else if (b.getX() < 0)
	{
		this->b.setPoint(0, b.getY());
	}
	else if (b.getY() > 399)
	{
		this->b.setPoint(b.getX(), 399);
	}
	else if (b.getY() < 0)
	{
		this->b.setPoint(b.getX(), 0);
	}
	else
	{
		this->b.setPoint(b.getX(), b.getY());
	}

	//set c
	if (c.getX() > 639)
	{
		this->c.setPoint(639, c.getY());
	}
	else if (c.getX() < 0)
	{
		this->c.setPoint(0, c.getY());
	}
	else if (c.getY() > 399)
	{
		this->c.setPoint(c.getX(), 399);
	}
	else if (c.getY() < 0)
	{
		this->c.setPoint(c.getX(), 0);
	}
	else
	{
		this->c.setPoint(c.getX(), c.getY());
	}

}
double Triangle::getArea()
{
	double side1 = 0;
	double side2 = 0;
	double side3 = 0;
	double area = 0;
	double s = 0;

	side1 = sqrt(pow(a.getX() - b.getX(), 2.0) + pow(a.getY() - b.getY(), 2.0));
	side2 = sqrt(pow(b.getX() - c.getX(), 2.0) + pow(b.getY() - c.getY(), 2.0));
	side3 = sqrt(pow(c.getX() - a.getX(), 2.0) + pow(c.getY() - a.getY(), 2.0));

	s = (side1 + side2 + side3) / 2.0;

	area = sqrt(s*(s - side1)*(s - side2)*(s - side3));

	return area;
}
double Triangle::getPerimeter()
{
	double perimeter = 0;
	double total = 0;

	total += sqrt(pow(a.getX() - b.getX(), 2.0) + pow(a.getY() - b.getY(), 2.0));
	total += sqrt(pow(b.getX() - c.getX(), 2.0) + pow(b.getY() - c.getY(), 2.0));
	total += sqrt(pow(c.getX() - a.getX(), 2.0) + pow(c.getY() - a.getY(), 2.0));

	perimeter = total;

	return perimeter;

}
void Triangle::print()
{
	gout << setPos(0, 400)
		<< "----------------------------------------------------------------------------------------------------------------------------"
		endg;
	gout << setPos(200, 405) << "Shape info Follows for: Quadrilateral" << endg;
	gout << setPos(200, 420) << "Point a: {" << a.getX() << "," << a.getY() << ")" << endg;
	gout << setPos(200, 435) << "Point b: {" << b.getX() << "," << b.getY() << ")" << endg;
	gout << setPos(200, 450) << "Point c: {" << c.getX() << "," << c.getY() << ")" << endg;
	gout << setPos(200, 465) << "Perimeter: " << getPerimeter() << endg;
	gout << setPos(200, 480) << "Area: " << getArea() << endg;
}
void Triangle::draw()
{
	int triangle = 0;

	triangle = drawLine(a.getX(), a.getY(), b.getX(), b.getY(), 1);
	::setColor(triangle, color.getRed(), color.getGreen(), color.getBlue());

	triangle = drawLine(b.getX(), b.getY(), c.getX(), c.getY(), 1);
	::setColor(triangle, color.getRed(), color.getGreen(), color.getBlue());

	triangle = drawLine(c.getX(), c.getY(), a.getX(), a.getY(), 1);
	::setColor(triangle, color.getRed(), color.getGreen(), color.getBlue());

}