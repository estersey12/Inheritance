//Emmanuelle Esters
//Lab9out
//More Shapes

#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Color.h" 
#include "GenPoint.h"
#include "graph1.h" 

Shape::Shape()  //Default Constructor - sets color to (0,0,0)
{
	Color(0, 0, 0);
}
Color Shape::getColor() //Getter for Color
{
	return color;
}
void Shape::setColor(Color color) //Setter for Color
{
	this->color.setColor(color.getRed(), color.getGreen(), color.getBlue());
}
