//Emmanuelle Esters
//Lab9out
//More Shapes

#pragma once
#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Shape.h"
#include "GenPoint.h"
#include "Color.h"

class Quadrilateral : public Shape
{
protected:

	GenPoint a;
	GenPoint b;
	GenPoint c;
	GenPoint d;


public:
	Quadrilateral();
	Quadrilateral(GenPoint a, GenPoint b, GenPoint c, GenPoint d, Color color);
	void setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d);
	double getPerimeter();
	void print();
	void draw();
};

#endif
