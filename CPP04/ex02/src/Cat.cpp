/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:42 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/10 10:27:52 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	_brain = new (std::nothrow)Brain();
	if (_brain == NULL)
		std::cout << MAGENTA << "Warning" << WHITE << " : New of Brain failed, this cat is going to be a bit weird";
	std::cout << BLACK << "Cat default constructor called" << WHITEENDL;
}

Cat::Cat(const Cat &c) : AAnimal(c)
{
	_brain = new (std::nothrow)Brain(*c._brain);
	if (_brain == NULL)
		std::cout << MAGENTA << "Warning" << WHITE << " : New of Brain failed, this cat is going to be a bit weird";
	std::cout << BLACK << "Cat copy constructor called" << WHITEENDL;
}

Cat	&Cat::operator=(const Cat &c)
{
	_brain = c._brain;
	_type = c._type;
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
