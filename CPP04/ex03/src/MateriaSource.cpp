#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		_stored[i] = NULL;
	std::cout << BLACK << "MateriaSource default constructor called" << WHITEENDL;
}

MateriaSource::MateriaSource(const MateriaSource &m) : IMateriaSource(m)
{
	for (int i = 0; i < 4; i++)
		_stored[i] = m._stored[i];
	std::cout << BLACK << "MateriaSource copy constructor called" << WHITEENDL;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &m)
{
	for (int i = 0; i < 4; i++)
		delete _stored[i];
	for (int i = 0; i < 4; i++)
	{
		if (m._stored[i] != NULL)
			_stored[i] = m._stored[i]->clone();
		else
			_stored[i] = NULL;
	}
	std::cout << BLACK << "MateriaSource copy assignment operator called" << WHITEENDL;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _stored[i];
	std::cout << BLACK << "MateriaSource destructor called" << WHITEENDL;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_stored[i] == NULL)
		{
			_stored[i] = m;
			return ;
		}
	}
	delete m;
	std::cout << RED << "Too many magic in that materia source, the materia you gave disapearred" << WHITEENDL;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_stored[i]->getType() == type)
			return (_stored[i]->clone());
	}
	std::cout << RED << "Doesnt know that type of magic" << WHITEENDL;
	return (NULL);
}
