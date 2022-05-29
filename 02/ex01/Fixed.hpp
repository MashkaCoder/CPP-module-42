#pragma once
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed	(const Fixed &other);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		Fixed	&operator = (const Fixed &other);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);
