#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap& origin);
		ScavTrap(std::string const name);
		~ScavTrap();
		void attack(std::string const & target);
		ScavTrap& operator=(const ScavTrap& origin);
		void guardGate();
};

#endif
