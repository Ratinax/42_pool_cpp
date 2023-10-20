/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:42 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/10 10:26:13 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	_brain = new (std::nothrow)Brain();
	if (_brain == NULL)
		std::cout << MAGENTA << "Warning" << WHITE << " : New of Brain failed, this cat is going to be a bit weird";
	std::cout << BLACK << "Cat default constructor called" << WHITEENDL;
}

Cat::Cat(const Cat &c) : Animal(c)
{
	_brain = new (std::nothrow)Brain(*c._brain);
	if (_brain == NULL)
		std::cout << MAGENTA << "Warning" << WHITE << " : New of Brain failed, this cat is going to be a bit weird";
	std::cout << BLACK << "Cat copy constructor called" << WHITEENDL;
}

Cat	&Cat::operator=(const Cat &c)
{
	_brain = c._brain;
	std::cout << BLACK << "Cat copy assignment operator called" << WHITEENDL;
	return (*this);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << BLACK << "Cat destructor called" << WHITEENDL;
}

void	Cat::makeSound(void) const
{
	std::cout << BLUE << "Miaou Miaou" << WHITEENDL;
}
