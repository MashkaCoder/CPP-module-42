#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat  default construstor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat constructor for " << getType() << " called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	WrongAnimal::operator=(other);
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow wrong:(" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}
