#pragma once
class Point
{
private:
	double _x = 0;
	double _y = 0;

public:
	Point();
	Point(double x, double y) : _x(x), _y(y) { }
	double getX() const; // query
	double getY() const; // query
	void setX(double x);
	void setY(double y);
};

