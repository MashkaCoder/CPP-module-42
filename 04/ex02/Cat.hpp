#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		virtual ~Cat();

		void	makeSound() const;

		void		setIdea(int num, std::string idea);
		std::string	getIdea(int num)const;
};
