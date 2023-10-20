#include "Character.hpp"

Character::Character(void) : ICharacter(), _name("unnamed"), _floorInd(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 10; i++)
		_floor[i] = NULL;
	std::cout << BLACK << "Character default constructor called" << WHITEENDL;
}

Character::Character(std::string name) : ICharacter(), _name(name), _floorInd(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 10; i++)
		_floor[i] = NULL;
	std::cout << BLACK << "Character constructor with args called" << WHITEENDL;
}

Character::Character(const Character &c) : ICharacter(c), _name(c._name), _floorInd(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = c._inventory[i];
	for (int i = 0; i < 10; i++)
		_floor[i] = NULL;
	std::cout << BLACK << "Character copy constructor called" << WHITEENDL;
}

Character	&Character::operator=(const Character &c)
{
	for (int i = 0; i < 4; i++)
		delete c._inventory[i];
	_name = c._name;
	for (int i = 0; i < 4; i++)
	{
		if (c._inventory[i] != NULL)
			_inventory[i] = c._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout << BLACK << "Character copy assignment operator called" << WHITEENDL;
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	for (int i = 0; i < 4; i++)
		delete _floor[i];
	std::cout << BLACK << "Character destructor called" << WHITEENDL;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << RED << "Inventory full, could not equip this new materia" << WHITEENDL;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_floorInd > 10)
			_floorInd -= 10;
		if (_floor[_floorInd] != NULL)
			delete _floor[_floorInd];
		_floor[_floorInd] = _inventory[idx];
		_inventory[idx] = NULL;
		_floorInd++;
	}
	else
		std::cout << RED << "That is not a good index to remove" << WHITEENDL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inventory[idx] != NULL)
		{
			_inventory[idx]->use(target);
			return ;
		}
	}
	std::cout << RED << _name << " cant use" << WHITEENDL;
	return ;
}
