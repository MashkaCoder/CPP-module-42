#pragma once
#include <iostream>

class WrongAnimal
{
	private:
		std::string	type;

	protected:
		WrongAnimal(std::string type);

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();

		void			makeSound() const;
		std::string		getType()const;
};
