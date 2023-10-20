/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:24:54 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/02 16:04:50 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0)
{
	std::cout << BLACK << "Fixed default constructor called" << WHITEENDL;
}

Fixed::Fixed(const int number)
{
	_raw = number << _bits;
	std::cout << BLACK << "Fixed constructor with const int called" << WHITEENDL;
}

Fixed::Fixed(const float number)
{
	std::cout << BLACK << "Fixed constructor with const float called" << WHITEENDL;
	_raw = (roundf(number * (1 << _bits)));
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
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

int	Fixed::toInt(void) const
{
	return (_raw >> _bits);
}

float	Fixed::toFloat(void) const
{
	return ((float) _raw / (1 << _bits));
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
