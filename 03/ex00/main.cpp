#include "ClapTrap.hpp"

int main()
{
	ClapTrap	Masha("Masha");
	ClapTrap	Rail("Rail");

	Masha.attack(Rail.getName());
	Rail.takeDamage(10);
	Masha.beRepaired(5);
}
