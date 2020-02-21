#pragma once

#include <iostream>

class Point
{
private:
	double _x;
	double _y;

public:
	Point() : _x(), _y() { }
	Point(double x, double y) : _x(x), _y(y) { }
	double getX() const; // query
	double getY() const; // query
	void setX(double x);
	void setY(double y);
	friend std::ostream& operator << (std::ostream& os, const Point& p);
};

