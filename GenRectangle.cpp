//Emmanuelle Esters
//Lab9out
//More Shapes

#include <iostream>
#include "graph1.h" 
#include "Quadrilateral.h"
#include "GenRectangle.h"

GenRectangle::GenRectangle()
{

}
GenRectangle::GenRectangle(GenPoint ul, GenPoint lr, Color c)
{
	ul.setPoint(ul.getX(), ul.getY());
	lr.setPoint(lr.getX(), lr.getY());
	color.setColor(c.getRed(), c.getGreen(), c.getBlue());
}
void GenRectangle::setPoints(GenPoint ul, GenPoint lr)
{
	GenPoint b(lr.getX(), ul.getY());
	GenPoint d(ul.getX(), lr.getY());

	Quadrilateral::setPoints(ul, b, lr, d);
}
double GenRectangle::getArea()
{
	double area = 0;
	double side1 = 0;
	double side2 = 0;

	//Calculate area using distance formula
	//side 1 length
	side1 = sqrt(pow(a.getX() - b.getX(), 2.0) + pow(a.getY() - b.getY(), 2.0));

	//side 2 length
	side2 = sqrt(pow(b.getX() - c.getX(), 2.0) + pow(b.getY() - c.getY(), 2.0));

	//Calculate area
	area = side1 * side2;

	return area;
}
void GenRectangle::print()
{
	int rect = 0;

	Quadrilateral::print();

	rect = drawLine(a.getX(), a.getY(), b.getX(), b.getY(), 1);
	::setColor(rect, color.getRed(), color.getGreen(), color.getBlue());

	rect = drawLine(b.getX(), b.getY(), c.getX(), c.getY(), 1);
	::setColor(rect, color.getRed(), color.getGreen(), color.getBlue());

	rect = drawLine(c.getX(), c.getY(), d.getX(), d.getY(), 1);
	::setColor(rect, color.getRed(), color.getGreen(), color.getBlue());

	rect = drawLine(d.getX(), d.getY(), a.getX(), a.getY(), 1);
	::setColor(rect, color.getRed(), color.getGreen(), color.getBlue());
}