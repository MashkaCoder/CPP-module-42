#pragma once
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:
		mutable int			value;
		static const int	bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &other);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits (int const raw) const;

		Fixed	&operator = (const Fixed &other);
		bool	operator > (const Fixed &other) const;
		bool	operator < (const Fixed &other) const;
		bool	operator <= (const Fixed &other) const;
		bool	operator >= (const Fixed &other) const;
		bool	operator == (const Fixed &other) const;
		bool	operator != (const Fixed &other) const;

		Fixed	operator + (const Fixed &other);
		Fixed	operator - (const Fixed &other);
		Fixed	operator * (const Fixed &other);
		Fixed	operator / (const Fixed &other);

		Fixed	operator ++ (int);
		Fixed	operator -- (int);
		Fixed	&operator ++ ();
		Fixed	&operator -- ();

		static Fixed	&min(Fixed &first, Fixed &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);
