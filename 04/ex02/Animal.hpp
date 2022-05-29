#pragma once
#include <iostream>

class Animal
{
	private:
		std::string	type;

	protected:
		Animal(std::string type);

	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		virtual void	makeSound() const = 0;
		std::string		getType()const;
};
