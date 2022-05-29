#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain;
	std::cout << "Cat  default construstor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	brain = new Brain;
	std::cout << "Cat constructor for " << getType() << " called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	brain = new Brain;

	brain->operator=(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	Animal::operator=(other);

	delete brain;

	brain = new Brain;
	brain->operator=(*other.brain);
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::setIdea(int num, std::string idea)
{
	brain->setIdeas(num, idea);
}

std::string	Cat::getIdea(int num)const
{
	return(brain->getIdeas(num));
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat default destructor called" << std::endl;
}
