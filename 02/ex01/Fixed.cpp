#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.value;
}

Fixed::Fixed(const int val) : value(val << bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
	int	pow;

	pow = 1 << bits;
	value = (int)roundf(val * pow);
}

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

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed	& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;
	return(*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return(out);
}
