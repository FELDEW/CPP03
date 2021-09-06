#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& origin);
		FragTrap(std::string const name);
		~FragTrap();
		FragTrap& operator=(const FragTrap& origin);
		void highFivesGuys();
};

#endif