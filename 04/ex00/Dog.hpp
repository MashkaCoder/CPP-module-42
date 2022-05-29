#pragma once
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		virtual ~Dog();

		void	makeSound() const;

};
