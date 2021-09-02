#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

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
		ClapTrap& operator=(const ClapTrap& origin);
	private:
		std::string name;
		int hitpoints;
		int energy_points;
		int attack_damage;
		static const int nb_bits = 8;
};

#endif