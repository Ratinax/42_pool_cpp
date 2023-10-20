/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:32 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:30:48 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("no type")
{
	std::cout << BLACK << "AAnimal default constructor called" << WHITEENDL;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << BLACK << "AAnimal with string constructor called" << WHITEENDL;
}

AAnimal::AAnimal(const AAnimal &a) : _type(a._type)
{
	std::cout << BLACK << "AAnimal copy constructor called" << WHITEENDL;
}

AAnimal	&AAnimal::operator=(const AAnimal &a)
{
	_type = a._type;
	std::cout << BLACK << "AAnimal copy assignment operator called" << WHITEENDL;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << BLACK << "AAnimal destructor called" << WHITEENDL;
}
