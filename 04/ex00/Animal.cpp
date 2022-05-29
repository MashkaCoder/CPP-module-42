#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "A copy animal constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	std::cout << "Animal copy assignment operator called" << std::endl;
	return(*this);
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal protected constructor called for " << type << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "hello from aminal class" << std::endl;
}

std::string Animal::getType()const
{
	return(type);
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}
