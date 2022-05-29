#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(float x, float y):x(x), y(y){}

Point::Point(const Point &other):x(other.x), y(other.y){}

float	Point::getX()const
{
	return(x.toFloat());
}

float	Point::getY()const
{
	return(y.toFloat());
}

Point	&Point::operator=(const Point &other)
{
	x.setRawBits(other.x.getRawBits());
	y.setRawBits(other.y.getRawBits());
	return(*this);
}

Point::~Point(){}

