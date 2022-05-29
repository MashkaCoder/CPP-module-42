#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap	parent("parent");
	ScavTrap	chield("chield");

	std::cout << "Ammout points " << chield.getName() << " hit points: " << chield.getHitPoints()
			<< ", enegry points: " << chield.getEnergyPoints()
			 << ", attack damage: " << chield.getAttackDamage() << std::endl;
	std::cout << "______________________________________________________________________________" << std::endl;
	std::cout << "Ammout points " << parent.getName() << " hit points: " << parent.getHitPoints()
			<< ", enegry points: " << parent.getEnergyPoints()
			 << ", attack damage: " << parent.getAttackDamage() << std::endl;
	chield.guradGate();
	chield.attack("parent");
	chield.takeDamage(30);
	chield.beRepaired(5);
	std::cout << "______________________________________________________________________________" << std::endl;
	std::cout << "Ammout points " << chield.getName() << " hit points: " << chield.getHitPoints()
			<< ", enegry points: " << chield.getEnergyPoints()
			 << ", attack damage: " << chield.getAttackDamage() << std::endl;
	return (0);
}
