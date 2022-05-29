#include "Span.hpp"

Span::Span(): max_count(0), count(0){}

Span::Span(unsigned int N) : max_count(N), count(0) {}

Span::Span(const Span &other)
{
	max_count = other.max_count;
	count = other.count;
	arr = other.arr;
}

Span &Span::operator=(const Span &other)
{
	max_count = other.max_count;
	count = other.count;
	arr = other.arr;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (count >= max_count)
		throw std::out_of_range("Can't add more numbers");
	arr.push_back(n);
	count++;
}

int	Span::longestSpan() const
{
	if (arr.size() < 2)
		throw std::logic_error("Span can't be found, too few numbers");

	std::vector<int> tmp = arr;
	std::sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

int	Span::shortestSpan() const
{
	if (arr.size() < 2)
		throw std::logic_error("Span can't be found, too few numbers");

	std::vector<int>			tmp = arr;
	int							span;
	std::vector<int>::iterator	it;

	std::sort(tmp.begin(), tmp.end());
	for (it = tmp.begin() + 1, span = *it - *(it - 1); it < tmp.end() - 1; ++it)
		if (*(it + 1) - *it < span)
			span = *(it + 1) - *it;

	return (span);
}


Span::~Span(){}
