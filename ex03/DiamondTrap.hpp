#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& origin);
		DiamondTrap(std::string const name);
		~DiamondTrap();
		void whoAmI();
		DiamondTrap& operator=(const DiamondTrap& origin);
	private:
		std::string name;
};

#endif