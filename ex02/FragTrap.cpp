#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	this->name = "Default";
	std::cout << "Default  Fragtrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	this->name = name;
	std::cout << name << " FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origin;	
}

FragTrap& FragTrap::operator=(const FragTrap& origin)
{
	if (this == &origin)
		return (*this);
	this->name = origin.getName();
	this->hitpoints = origin.getHitpoints();
	this->energy_points = origin.getEnergyPoints();
	this->attack_damage = origin.getAttackDamage();
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << this->name << " request high fives!" << std::endl;
}