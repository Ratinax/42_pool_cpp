/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:55:29 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/03 14:45:17 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_name = "unnamed";
	_hitPoints = 100;
	_hitPointsMax = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << BLACK << "ScavTrap default constructor called" << WHITEENDL;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_hitPointsMax = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << BLACK << "ScavTrap constructor with name called" << WHITEENDL;
}

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
	_name = s._name;
	_hitPoints = s._hitPoints;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
	std::cout << BLACK << "ScavTrap copy constructor called" << WHITEENDL;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << BLACK << "ScavTrap destructor called" << WHITEENDL;
}

void	ScavTrap::guardGate(void)
{
	std::cout << BLUE << "ScavTrap " << _name << " entered guard gate mode" << WHITEENDL;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << YELLOW << "ScavTrap " << _name << " couldn't attack because he is dead" << WHITEENDL;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << YELLOW << "ScavTrap " << _name << " couldn't attack " << target << " because he has only " << _energyPoints << " energy points" << WHITEENDL;
		return ;
	}
	std::cout << RED << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << WHITEENDL;
	_energyPoints--;
	std::cout << BLUE << "ScavTrap " << _name << " lost 1 energy point, now has " << _energyPoints << WHITEENDL;
}
