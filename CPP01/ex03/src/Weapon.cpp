/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:54:42 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/01 14:40:04 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << BLACK << "Weapon without type has been summoned" << WHITEENDL;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << BLACK << "Weapon " << _type << " has been summoned" << WHITEENDL;
}

Weapon::~Weapon(void)
{
	std::cout << BLACK << "Weapon " << _type << " has been destroyed" << WHITEENDL;
}

const std::string	&Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}

std::ostream	&operator<<(std::ostream &out, Weapon &weapon)
{
	out << weapon.getType();
	return (out);
}
