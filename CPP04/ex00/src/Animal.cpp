/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:40 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:39:08 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("no type")
{
	std::cout << BLACK << "Animal default constructor called" << WHITEENDL;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << BLACK << "Animal with string constructor called" << WHITEENDL;
}

Animal::Animal(const Animal &a) : _type(a._type)
{
	std::cout << BLACK << "Animal copy constructor called" << WHITEENDL;
}

Animal	&Animal::operator=(const Animal &a)
{
	_type = a._type;
	std::cout << BLACK << "Animal copy assignment operator called" << WHITEENDL;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << BLACK << "Animal destructor called" << WHITEENDL;
}

void	Animal::makeSound(void) const
{
	std::cout << BLUE << "*Default animal " << _type << " sound*" << WHITEENDL;
}
