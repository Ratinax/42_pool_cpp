/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:45 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:35:45 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << BLACK << "Dog default constructor called" << WHITEENDL;
}

Dog::Dog(const Dog &d) : Animal(d)
{
	std::cout << BLACK << "Dog copy constructor called" << WHITEENDL;
}

Dog	&Dog::operator=(const Dog &d)
{
	_type = d._type;
	std::cout << BLACK << "Dog copy assignment operator called" << WHITEENDL;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << BLACK << "Dog destructor called" << WHITEENDL;
}

void	Dog::makeSound(void) const
{
	std::cout << BLUE << "Wouaf Wouaf" << WHITEENDL;
}

