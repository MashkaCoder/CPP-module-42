#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : _type(_type) {}

Weapon::~Weapon(){};

void	Weapon::setType(const std::string _type)
{
	this->_type = _type;
}

std::string Weapon::getType(void)
{
	return (_type);
}
