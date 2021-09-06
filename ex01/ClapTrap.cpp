#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitpoints(10), energy_points(10), attack_damage(0), name("Default")
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name): hitpoints(10), energy_points(10), attack_damage(0), name(name)
{
	std::cout << name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origin;	
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getHitpoints() const
{
	return (this->hitpoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->energy_points);
}

int ClapTrap::getAttackDamage() const
{
	return (this->attack_damage);
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
		std::cout << "ClapTrap " << this->name << " taked ";
		std::cout << this->hitpoints << " points of damage and died!" << std::endl;
		this->hitpoints = 0;
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

ClapTrap& ClapTrap::operator=(const ClapTrap& origin)
{
	if (this == &origin)
		return (*this);
	this->name = origin.getName();
	this->hitpoints = origin.getHitpoints();
	this->energy_points = origin.getEnergyPoints();
	this->attack_damage = origin.getAttackDamage();
	return (*this);
}
