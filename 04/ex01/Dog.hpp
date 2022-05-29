#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		virtual ~Dog();

		void		makeSound() const;
		void		setIdea(int num, std::string idea);
		std::string	getIdea(int num)const;
};
