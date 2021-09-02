#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

ClapTrap::ClapTrap(int const param)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = param << this->nb_bits;
}

ClapTrap::ClapTrap(float const param)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf)(param * (1 << this->nb_bits));
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

int ClapTrap::getRawBits( void ) const
{
	return (this->value);
}

void ClapTrap::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& origin)
{
	std::cout << "Assignation operator called" << std::endl;
	value = origin.getRawBits();
	return (*this);
}

