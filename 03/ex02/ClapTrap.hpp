#pragma once
#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

	protected:
		ClapTrap(std::string name, int hit, int enegry, int attack);

	public:
		ClapTrap();
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName()const;
		int				getHitPoints()const;
		int				getEnergyPoints()const;
		int				getAttackDamage()const;
		void			setEnergyPoints(int point);
};
