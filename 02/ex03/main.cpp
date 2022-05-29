#include "Point.hpp"

int main(void)
{
	Point	a(4.06f, 5.07f);
	Point	b(10.06f, 15.17f);
	Point	c(14.776f, 25.07f);
	Point	point(5.06f, 7.07f);

	if (bsp(a, b, c, point) == true)
		std::cout << "a point is inside of a triangle" << std::endl;
	else
		std::cout << "a point isn't inside of a triangle" << std::endl;
	return (0);
}
