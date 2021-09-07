#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{	
	this->name = "Default";
	this->ClapTrap::name = this->name;
	this->ClapTrap::name.append("_clap_name");
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
	std::cout << "Default  Diamondtrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	
	this->name = name;
	this->ClapTrap::name = this->name;
	this->ClapTrap::name.append("_clap_name");
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
	std::cout << name << " DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name << " DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origin;	
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& origin)
{
	if (this == &origin)
		return (*this);
	this->name = origin.getName();
	this->hitpoints = origin.getHitpoints();
	this->energy_points = origin.getEnergyPoints();
	this->attack_damage = origin.getAttackDamage();
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Clap name: " << this->ClapTrap::name << std::endl;
	std::cout << "Hitpoints: " << this->hitpoints << std::endl;
	std::cout << "Energy points: " << this->energy_points << std::endl;
	std::cout << "Attack damage: " << this->attack_damage << std::endl;
}