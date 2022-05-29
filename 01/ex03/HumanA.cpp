#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : _name(_name), _weapon(_weapon){};

HumanA::~HumanA(){};

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
