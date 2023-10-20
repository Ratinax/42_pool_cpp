/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:24:54 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/02 16:04:37 by ratinax          ###   ########.fr       */
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

/*opperators*/

bool Fixed::operator>(const Fixed &other) const
{
	return (_raw > other._raw);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (_raw < other._raw);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (_raw >= other._raw);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (_raw <= other._raw);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (_raw == other._raw);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (_raw != other._raw);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (_raw + other._raw);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (_raw - other._raw);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (_raw / other._raw);
}

Fixed &Fixed::operator++(void)
{
	_raw++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed res(*this);

	_raw++;
	return (res);
}

Fixed &Fixed::operator--(void)
{
	_raw--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed res(*this);

	_raw--;
	return (res);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
