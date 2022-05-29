#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string	_type;
	public:
		std::string	getType(void);
		void		setType(const std::string _type);
		Weapon(std::string _type);
		Weapon();
		~Weapon();
};
