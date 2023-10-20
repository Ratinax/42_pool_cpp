/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:24:54 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/02 16:07:03 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0)
{
	std::cout << BLACK << "Fixed default constructor called" << WHITEENDL;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << BLACK << "Fixed copy constructor called" << WHITEENDL;
	*this = f;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << BLACK << "Fixed copy assignment operator called" << WHITEENDL;
	setRawBits(f.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << BLACK << "Fixed destructor called" << WHITEENDL;
}

int	Fixed::getRawBits(void) const
{
	std::cout << WHITE << "getRawBits member function called" << WHITEENDL;
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}
