#include "Fixed.hpp"

const int Fixed::bits = 8;

// constructors

Fixed::Fixed() : value(0){}

Fixed::Fixed(const Fixed &other)
{
	this->value = other.value;
}

Fixed::Fixed(const int val) : value(val << bits){}

Fixed::Fixed(const float val)
{
	int	pow;

	pow = 1 << bits;
	value = (int)roundf(val * pow);
}

// get/set

int	Fixed::getRawBits(void) const
{
	return(value);
}

void	Fixed::setRawBits(int const raw) const
{
	value = raw;
}

// func for convert fixed-point value to int/float

int	Fixed::toInt(void)const
{
	return(value >> bits);
}

float	Fixed::toFloat(void)const
{
	int	pow;

	pow = 1 << bits;
	return((float)value/(float)pow);
}

// comparison operators

bool	Fixed::operator>(const Fixed &other) const
{
	return(this->value > other.value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return(this->value < other.value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return(this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return(this->value <= other.value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return(this->value == other.value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return(this->value != other.value);
}

// arithmetic operator

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	res(this->toFloat() + other.toFloat());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	res(this->toFloat() - other.toFloat());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	res(this->toFloat() * other.toFloat());
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed	res(this->toFloat() / other.toFloat());
	return (res);
}

// increment/decrement

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->value++;
	return(tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->value--;
	return(tmp);
}

Fixed	&Fixed::operator++()
{
	this->value++;
	return(*this);
}

Fixed	&Fixed::operator--()
{
	this->value--;
	return(*this);
}

// common operators overload

Fixed	& Fixed::operator=(const Fixed &other)
{
	this->value = other.value;
	return(*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return(out);
}

// min/max

Fixed	&Fixed::min(Fixed &first, Fixed &second){
	if(first <= second)
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second){
	if(first >= second)
		return (first);
	return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second){
	if(first <= second)
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second){
	if(first >= second)
		return (first);
	return (second);
}

Fixed::~Fixed(){}
