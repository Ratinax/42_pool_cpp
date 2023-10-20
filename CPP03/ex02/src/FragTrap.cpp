/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:25:30 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/03 14:45:26 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_name = "unnamed";
	_hitPoints = 100;
	_hitPointsMax = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << BLACK << "FragTrap default constructor called" << WHITEENDL;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_hitPointsMax = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << BLACK << "FragTrap constructor with name called" << WHITEENDL;
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f)
{
	_name = f._name;
	_hitPoints = f._hitPoints;
	_energyPoints = f._energyPoints;
	_attackDamage = f._attackDamage;
	std::cout << BLACK << "FragTrap copy constructor called" << WHITEENDL;
}

FragTrap::~FragTrap(void)
{
	std::cout << BLACK << "FragTrap destructor called" << WHITEENDL;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FragTrap " << _name << " want some high fives !" << WHITEENDL;
}
