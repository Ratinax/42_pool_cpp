#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << BLACK << "AMateria default constructor called" << WHITEENDL;
}

AMateria::AMateria(std::string type) : _type(type)
{
	std::cout << BLACK << "AMateria constructor with args called" << WHITEENDL;
}

AMateria::AMateria(const AMateria &a) : _type(a._type)
{
	std::cout << BLACK << "AMateria copy constructor called" << WHITEENDL;
}

AMateria	&AMateria::operator=(const AMateria &a)
{
	(void) a;
	std::cout << BLACK << "AMateria copy assignment operator called" << WHITEENDL;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << BLACK << "AMateria destructor called" << WHITEENDL;
}

void AMateria::use(ICharacter &target)
{
	if (_type == "ice")
		std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *" << WHITEENDL;
	else if (_type == "cure")
		std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << WHITEENDL;
	else
		std::cout << RED << "there's no such type of magic" << WHITEENDL;
}

std::string const & AMateria::getType() const
{
	return (_type);
}
