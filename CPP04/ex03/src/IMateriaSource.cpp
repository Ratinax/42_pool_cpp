#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << BLACK << "IMateriaSource default constructor called" << WHITEENDL;
}

IMateriaSource::IMateriaSource(const IMateriaSource &i)
{
	(void) i;
	std::cout << BLACK << "IMateriaSource copy constructor called" << WHITEENDL;
}

IMateriaSource	&IMateriaSource::operator=(const IMateriaSource &i)
{
	(void) i;
	std::cout << BLACK << "IMateriaSource copy assignment operator called" << WHITEENDL;
	return (*this);
}

IMateriaSource::~IMateriaSource(void)
{
	std::cout << BLACK << "IMateriaSource destructor called" << WHITEENDL;
}
