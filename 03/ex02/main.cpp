#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	{
		std::cout << "ScavTrap\n" << std::endl;
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
	}
	{
		std::cout << "______________________________________________________________________________" << std::endl;
		std::cout << "FragTrap\n" << std::endl;
		ClapTrap	parent("parent");
		FragTrap	chield("chield");

		std::cout << "Ammout points " << chield.getName() << " hit points: " << chield.getHitPoints()
				<< ", enegry points: " << chield.getEnergyPoints()
				<< ", attack damage: " << chield.getAttackDamage() << std::endl;
		std::cout << "______________________________________________________________________________" << std::endl;
		std::cout << "Ammout points " << parent.getName() << " hit points: " << parent.getHitPoints()
				<< ", enegry points: " << parent.getEnergyPoints()
				<< ", attack damage: " << parent.getAttackDamage() << std::endl;
		chield.highFivesGuys();
		chield.attack("parent");
		chield.takeDamage(30);
		chield.beRepaired(5);
		std::cout << "______________________________________________________________________________" << std::endl;
		std::cout << "Ammout points " << chield.getName() << " hit points: " << chield.getHitPoints()
				<< ", enegry points: " << chield.getEnergyPoints()
				<< ", attack damage: " << chield.getAttackDamage() << std::endl;
	}

	return (0);
}
