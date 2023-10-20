/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:10:26 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/03 14:44:37 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0), _hitPointsMax(_hitPoints)
{
	std::cout << BLACK << "ClapTrap default constructor called" << WHITEENDL;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _hitPointsMax(_hitPoints)
{
	std::cout << BLACK << "ClapTrap constructor with name called" << WHITEENDL;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	_name = c._name;
	_hitPoints = c._hitPoints;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	_hitPointsMax = c._hitPointsMax;
	std::cout << BLACK << "ClapTrap copy constructor called" << WHITEENDL;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
	_name = c._name;
	_hitPoints = c._hitPoints;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	_hitPointsMax = c._hitPointsMax;
	std::cout << BLACK << "ClapTrap copy assignment operator called" << WHITEENDL;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << BLACK << "ClapTrap destructor called" << WHITEENDL;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << _name << " couldn't attack because he is dead" << WHITEENDL;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << _name << " couldn't attack " << target << " because he has only " << _energyPoints << " energy points" << WHITEENDL;
		return ;
	}
	std::cout << RED << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << WHITEENDL;
	_energyPoints--;
	std::cout << BLUE << "ClapTrap " << _name << " lost 1 energy point, now has " << _energyPoints << WHITEENDL;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << _name << " couldn't take damage because he is dead" << WHITEENDL;
		return ;
	}
	_hitPoints -= amount;
	std::cout << RED << "ClapTrap " << _name << " took " << amount << " damages, now has " << _hitPoints << " hit points" << WHITEENDL;
	if (_hitPoints <= 0)
		std::cout << BOLDRED << "ClapTrap " << _name << " is dead" << WHITEENDL;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << _name << " couldn't be repaired because he is dead" << WHITEENDL;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << _name << " couldn't be repaired because he has only " << _energyPoints << " energy points" << WHITEENDL;
		return ;
	}
	_hitPoints += amount;
	std::cout << GREEN << "ClapTrap " << _name << " recovered " << amount << " hit points, now has " << _hitPoints << " hit points" << WHITEENDL;
	if (_hitPoints > _hitPointsMax)
	{
		std::cout << BLUE << _hitPoints << " are too much hit points for a ClapTrap this will be cap to " << _hitPointsMax << WHITEENDL;
		_hitPoints = _hitPointsMax;
	}
	_energyPoints--;
	std::cout << BLUE << "ClapTrap " << _name << " lost 1 energy point, now has " << _energyPoints << WHITEENDL;
}
