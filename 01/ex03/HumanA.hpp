#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon	&_weapon;

public:
	void	attack(void);
	HumanA(std::string _name, Weapon &_weapon);
	HumanA(Weapon &_weapon);
	~HumanA();
};


