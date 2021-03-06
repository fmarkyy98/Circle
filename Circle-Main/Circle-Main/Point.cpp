#include <iostream>
#include "Point.h"

double Point::getX() const
{
	return this->_x;
}

double Point::getY() const
{
	return this->_y;
}

void Point::setX(double x)
{
	this->_x = x;
}

void Point::setY(double y)
{
	this->_y = y;
}

std::ostream& operator << (std::ostream& os, const Point& p)
{
	os << "(" << p._x << "," << p._y << ")";
	return os;
}