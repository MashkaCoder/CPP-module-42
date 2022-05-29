#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon	*_weapon;

	public:
		void	attack();
		void	setWeapon(Weapon *_weapon);
		HumanB(std::string _name);
		~HumanB();
};


