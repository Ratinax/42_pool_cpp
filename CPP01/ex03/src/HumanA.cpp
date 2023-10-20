/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:54:35 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/01 14:39:48 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << BLACK << _name << " is born and has weapon called " << _weapon << WHITEENDL;
}

HumanA::~HumanA(void)
{
	std::cout << BLACK << _name << " is dead" << WHITEENDL;
}

void	HumanA::setType(std::string type)
{
	std::cout << BLUE << _weapon << " has beend changed to " << type << WHITEENDL;
	_weapon.setType(type);
}

void	HumanA::attack(void)
{
	std::cout << BLUE << _name << " attack with his " << _weapon << WHITEENDL;
}
