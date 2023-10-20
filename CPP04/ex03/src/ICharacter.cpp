#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &i)
{
	(void) i;
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter	&ICharacter::operator=(const ICharacter &i)
{
	(void) i;
	std::cout << "ICharacter copy assignment operator called" << std::endl;
	return (*this);
}

ICharacter::~ICharacter(void)
{
	std::cout << "ICharacter destructor called" << std::endl;
}
