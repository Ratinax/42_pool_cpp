#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << BLACK << "Cure default constructor called" << WHITEENDL;
}

Cure::Cure(const Cure &c) : AMateria(c)
{
	std::cout << BLACK << "Cure copy constructor called" << WHITEENDL;
}

Cure	&Cure::operator=(const Cure &c)
{
	(void) c;
	std::cout << BLACK << "Cure copy assignment operator called" << WHITEENDL;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << BLACK << "Cure destructor called" << WHITEENDL;
}

AMateria* Cure::clone() const
{
	return (new (std::nothrow)Cure(*this));
}
