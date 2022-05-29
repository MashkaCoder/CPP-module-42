#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(float x, float y);
		Point(const Point &other);
		~Point();

		Point &operator = (const Point &other);

		float	getX()const;
		float	getY()const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
