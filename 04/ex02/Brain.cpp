#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "A copy Brain constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copy assignment operator called" << std::endl;
	return(*this);
}

void	Brain::setIdeas(int num, std::string idea)
{
	if (num < 0 || num > 99)
		return;
	ideas[num] = idea;
}

std::string Brain::getIdeas(int num)const
{
	if (num < 0 || num > 99)
		return ("");
	return (ideas[num]);
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}
