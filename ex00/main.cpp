#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap clown("clown");
	ClapTrap goatman("goatman");
	ClapTrap tretiy;
	tretiy = goatman;

	clown.attack("goatman");
	goatman.takeDamage(0);
	goatman.takeDamage(2);
	goatman.beRepaired(2);
	goatman.takeDamage(10);
	tretiy.attack("clown");
	return 0;
}