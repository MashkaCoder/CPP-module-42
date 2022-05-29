#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "A copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return(*this);
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal protected constructor called for " << type << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "hello from AminalWrong class" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return(type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}
