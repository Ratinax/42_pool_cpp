/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:42 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:35:42 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << BLACK << "Cat default constructor called" << WHITEENDL;
}

Cat::Cat(const Cat &c) : Animal(c)
{
	std::cout << BLACK << "Cat copy constructor called" << WHITEENDL;
}

Cat	&Cat::operator=(const Cat &c)
{
	_type = c._type;
	std::cout << BLACK << "Cat copy assignment operator called" << WHITEENDL;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << BLACK << "Cat destructor called" << WHITEENDL;
}

void	Cat::makeSound(void) const
{
	std::cout << BLUE << "Miaou Miaou" << WHITEENDL;
}
