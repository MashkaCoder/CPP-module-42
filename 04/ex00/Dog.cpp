#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog  default construstor called " << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor for " << getType() << " called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Auuff" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}
