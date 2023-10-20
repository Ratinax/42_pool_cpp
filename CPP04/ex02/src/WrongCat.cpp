/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:42 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 11:08:20 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << BLACK << "WrongCat default constructor called" << WHITEENDL;
}

WrongCat::WrongCat(const WrongCat &w) : WrongAnimal(w)
{
	std::cout << BLACK << "WrongCat copy constructor called" << WHITEENDL;
}

WrongCat	&WrongCat::operator=(const WrongCat &w)
{
	_type = w._type;
	std::cout << BLACK << "WrongCat copy assignment operator called" << WHITEENDL;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << BLACK << "WrongCat destructor called" << WHITEENDL;
}

void	WrongCat::makeSound(void)
{
	std::cout << BLUE << " WrongCat : Miaou Miaou" << WHITEENDL;
}
