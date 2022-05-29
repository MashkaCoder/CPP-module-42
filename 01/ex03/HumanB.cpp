#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name) : _name(_name) {};

HumanB::~HumanB(){};

void HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *_weapon)
{
	this->_weapon = _weapon;
}

