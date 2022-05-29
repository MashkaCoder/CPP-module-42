#include "Span.hpp"

int main()
{
	Span sp = Span(10001);
	for (int i = 0; i < 10001; i++)
		sp.addNumber(i);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
