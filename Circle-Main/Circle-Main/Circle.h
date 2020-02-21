#pragma once

#include<iostream>
#include"Point.h"

class Circle
{
private:
	Point _p;
	double _r;

public:
	Circle() : _p(), _r() { }
	Circle(Point p, double r);
	Circle(double x, double y, double r);

	double Area();

	friend std::ostream& operator << (std::ostream& os, const Circle& c);


};

