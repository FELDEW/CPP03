#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& origin);
		ClapTrap(std::string const name);
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
//		ClapTrap& operator=(const ClapTrap& origin);
	protected:
		std::string name;
		int hitpoints;
		int energy_points;
		int attack_damage;
};

#endif