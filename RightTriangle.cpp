//Emmanuelle Esters
//Lab9out
//More Shapes

#include <iostream>
#include "graph1.h" 
#include "Triangle.h"
#include "RightTriangle.h"

RightTriangle::RightTriangle()
{

}
RightTriangle::RightTriangle(GenPoint vertex, int height, int base, Color color)
{

}
void RightTriangle::print()
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