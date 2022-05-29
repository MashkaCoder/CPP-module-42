#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("no"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "A constructor for " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :
		_name(other._name),
		_hit_points(other._hit_points) ,
		_energy_points(other._hit_points),
		_attack_damage(other._attack_damage)
{
	std::cout << "A copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << "Copy assignment operator called" << std::endl;
	return(*this);
}

std::string ClapTrap::getName()const
{
	return(_name);
}

int	ClapTrap::getHitPoints()const
{
	return(_hit_points);
}

int	ClapTrap::getEnergyPoints()const
{
	return(_energy_points);
}

int	ClapTrap::getAttackDamage()const
{
	return(_attack_damage);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << _name << ", sorry. You aren't enought energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int ammout)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_hit_points -= ammout;
		std::cout << "ClapTrap " << _name << " been attack, you lost " << ammout << " hit points" << std::endl;
		if (_hit_points <= 0)
			std::cout << "ClapTrap " << _name << " died" << std::endl;
	}
	else
		std::cout << _name << ", sorry. You aren't enought energy points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amout)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_hit_points += amout;
		std::cout << "ClapTrap " << _name << " you increased you health by " << amout << " and now you have "  << _hit_points << " hit points" << std::endl;
	}
	else
		std::cout << _name << ", sorry. You aren't enought energy points" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}
