/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:40 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 11:06:09 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << BLACK << "WrongAnimal default constructor called" << WHITEENDL;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << BLACK << "WrongAnimal with string constructor called" << WHITEENDL;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : _type(a._type)
{
	std::cout << BLACK << "WrongAnimal copy constructor called" << WHITEENDL;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &a)
{
	_type = a._type;
	std::cout << BLACK << "WrongAnimal copy assignment operator called" << WHITEENDL;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << BLACK << "WrongAnimal destructor called" << WHITEENDL;
}

void	WrongAnimal::makeSound(void)
{
	std::cout << BLUE << "*Default wrong animal sound*" << WHITEENDL;
}
