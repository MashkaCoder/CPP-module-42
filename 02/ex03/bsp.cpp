#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int	n;

	n = 0;
	if ((a.getX() - point.getX()) * (b.getY() - a.getY()) -
		(b.getX() - a.getX()) * (a.getY() - point.getY()) >= 0)
		n++;
	if ((b.getX() - point.getX()) * (c.getY() - b.getY()) -
		(c.getX() - b.getX()) * (b.getY() - point.getY()) >= 0)
		n++;
	if ((c.getX() - point.getX()) * (a.getY() - c.getY()) -
		(a.getX() - c.getX()) * (c.getY() - point.getY()) >= 0)
		n++;
	if (n == 3)
		return (true);
	return (false);
}
