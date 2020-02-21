#include <iostream>
#include "Point.h"
#include "Circle.h"

Circle::Circle(Point p, double r) : _p(p.getX(),p.getY())
{
	if (r > 0)
	{
		_r = r;
	}
	else
	{
		throw std::invalid_argument("Received not-positive value as radius.");
	}
}


Circle::Circle(double x, double y, double r) : _p(x, y)
{
	if (r > 0)
	{
		_r = r;
	}
	else
	{
		throw std::invalid_argument("Received not-positive value as radius.");
	}
}

std::ostream& operator << (std::ostream& os, const Circle& c)
{
	os << "Central point:" << c._p << "\tRadius:" << c._r << ")";
	return os;
}