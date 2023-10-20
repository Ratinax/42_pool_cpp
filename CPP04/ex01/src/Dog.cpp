/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:45 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/10 10:25:58 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	_brain = new (std::nothrow)Brain();
	if (_brain == NULL)
		std::cout << MAGENTA << "Warning" << WHITE << " : New of Brain failed, this dog is going to be a bit weird" << WHITEENDL;
	std::cout << BLACK << "Dog default constructor called" << WHITEENDL;
}

Dog::Dog(const Dog &d) : Animal(d)
{
	_brain = new (std::nothrow)Brain(*d._brain);
	if (_brain == NULL)
		std::cout << MAGENTA << "Warning" << WHITE << " : New of Brain failed, this cat is going to be a bit weird";
	std::cout << BLACK << "Dog copy constructor called" << WHITEENDL;
}

Dog	&Dog::operator=(const Dog &d)
{
	_brain = d._brain;
	_type = d._type;
	std::cout << BLACK << "Dog copy assignment operator called" << WHITEENDL;
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << BLACK << "Dog destructor called" << WHITEENDL;
}

void	Dog::makeSound(void) const
{
	std::cout << BLUE << "Wouaf Wouaf" << WHITEENDL;
}

