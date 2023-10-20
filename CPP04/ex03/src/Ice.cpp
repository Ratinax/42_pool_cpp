#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << BLACK << "Ice default constructor called" << WHITEENDL;
}

Ice::Ice(const Ice &i) : AMateria(i)
{
	std::cout << BLACK << "Ice copy constructor called" << WHITEENDL;
}

Ice	&Ice::operator=(const Ice &i)
{
	(void) i;
	std::cout << BLACK << "Ice copy assignment operator called" << WHITEENDL;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << BLACK << "Ice destructor called" << WHITEENDL;
}

AMateria* Ice::clone() const
{
	return (new (std::nothrow)Ice(*this));
}
