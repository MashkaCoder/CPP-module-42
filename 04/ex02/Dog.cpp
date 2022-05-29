#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain;
	std::cout << "Dog  default construstor called " << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	brain = new Brain;
	std::cout << "Dog constructor for " << getType() << " called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	brain = new Brain;

	brain->operator=(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	Animal::operator=(other);

	delete brain;

	brain = new Brain;
	brain->operator=(*other.brain);
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Auuff" << std::endl;
}

void	Dog::setIdea(int num, std::string idea)
{
	brain->setIdeas(num, idea);
}

std::string	Dog::getIdea(int num)const
{
	return(brain->getIdeas(num));
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog default destructor called" << std::endl;
}
