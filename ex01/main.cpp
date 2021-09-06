#include "ScavTrap.hpp"

int main( void ) 
{
	ScavTrap clown("clown");
	ClapTrap goatman("goatman");

	clown.attack("goatman");
	goatman.takeDamage(0);
	goatman.takeDamage(2);
	goatman.beRepaired(2);
	clown.takeDamage(50);
	clown.guardGate();
	return 0;
}