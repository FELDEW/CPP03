#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->name = "Default";
	std::cout << "Default  scavtrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->name = name;
	std::cout << name << " ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origin;	
}

void ScavTrap::attack( std::string const & target)
{
	if (this->energy_points < this->attack_damage)
		std::cout << "Not enought energy to attack" << std::endl;
	else
	{
		this->energy_points -= this->attack_damage;
		std::cout << "ScavTrap " << this->name << " attack " << target << " causing ";
		std::cout << this->attack_damage << " points of damage!" << std::endl;
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
{
	if (this == &origin)
		return (*this);
	this->name = origin.getName();
	this->hitpoints = origin.getHitpoints();
	this->energy_points = origin.getEnergyPoints();
	this->attack_damage = origin.getAttackDamage();
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << this->name << " enterred in Gate keeper mode" << std::endl;
}