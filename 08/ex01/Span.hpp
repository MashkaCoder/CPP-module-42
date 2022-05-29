#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		unsigned int		max_count;
		unsigned int		count;
		std::vector<int>	arr;

	public:
		Span();
		Span(const unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void			addNumber(int n);
		int	shortestSpan() const;
		int	longestSpan() const;

};


#endif
