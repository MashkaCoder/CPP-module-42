#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat  default construstor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat constructor for " << getType() << " called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}
