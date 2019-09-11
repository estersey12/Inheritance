//Emmanuelle Esters
//Lab9out
//More Shapes

#pragma once
#ifndef GENRECTANGLE_H
#define GENRECTANGLE_H

#include "Quadrilateral.h"
#include "GenPoint.h"
#include "Color.h"

class GenRectangle : public Quadrilateral
{

public:
	GenRectangle();
	GenRectangle(GenPoint ul, GenPoint lr, Color c);
	void setPoints(GenPoint ul, GenPoint lr);
	double getArea();
	void print();
};

#endif
