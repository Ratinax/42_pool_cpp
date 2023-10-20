/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:54:37 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/01 14:39:52 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << BLACK << _name << " is born and doesn't own a weapon" << WHITEENDL;
}

HumanB::~HumanB(void)
{
	std::cout << BLACK << _name << " is dead" << WHITEENDL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	std::cout << BLUE << _name << " now owes a weapon called " << _weapon << WHITEENDL;
	_weapon = &weapon;
}
void	HumanB::setType(std::string type)
{
	std::cout << BLUE << _weapon << " has beend changed to " << type << WHITEENDL;
	if (_weapon != NULL)
		_weapon->setType(type);
}

void	HumanB::attack(void)
{
	if (_weapon == NULL)
		std::cout << BLUE << _name << " cannot attack because he has no weapon" << WHITEENDL;
	else
		std::cout << BLUE << _name << " attack with his " << *_weapon << WHITEENDL;
}
