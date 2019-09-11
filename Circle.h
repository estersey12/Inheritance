//Emmanuelle Esters
//Lab9out
//More Shapes

#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
protected:
	int radius;
	GenPoint center;
	double pi;
	

public:
	Circle();
	Circle(GenPoint center, int radius, Color c);
	void setCenter(GenPoint center);
	void setRadius(int radius);
	double getPerimeter();
	double getArea();
	void print();
	void draw();
};

#endif

