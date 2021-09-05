#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->name = "Default";
}

ClapTrap::ClapTrap(std::string const name)
{
	std::cout << "Name constructor called" << std::endl;
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origin;	
}

void ClapTrap::attack( std::string const & target)
{
	if (this->energy_points < this->attack_damage)
		std::cout << "Not enought energy to attack" << std::endl;
	else
	{
		this->energy_points -= this->attack_damage;
		std::cout << "ClapTrap " << this->name << " attack " << target << " causing ";
		std::cout << this->attack_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage( unsigned int amount)
{
	if (this->hitpoints <= amount)
	{
		this->hitpoints = 0;
		std::cout << "ClapTrap " << this->name << " taked ";
		std::cout << this->hitpoints << " points of damage and died!" << std::endl;

	}
	else
	{
		this->hitpoints -= amount;
		std::cout << "ClapTrap " << this->name << " taked ";
		std::cout << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount)
{
	this->hitpoints += amount;
	std::cout << "ClapTrap " << this->name << " repaired ";
	std::cout << amount << " points!" << std::endl;
}
