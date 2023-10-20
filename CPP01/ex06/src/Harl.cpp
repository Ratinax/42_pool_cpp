/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:08:22 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/01 15:04:11 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define INT_MAX 2147483647

Harl::Harl(void)
{
	std::cout << BLACK << "Harl default constructor called" << WHITEENDL;
	ftab[0] = &Harl::_debug;
	ftab[1] = &Harl::_info;
	ftab[2] = &Harl::_warning;
	ftab[3] = &Harl::_error;
	_errors[0] = "DEBUG";
	_errors[1] = "INFO";
	_errors[2] = "WARNING";
	_errors[3] = "ERROR";
}

Harl::~Harl(void)
{
	std::cout << BLACK << "Harl default destructor called" << WHITEENDL;
}


void	Harl::_debug(void)
{
	std::cout << RED << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << WHITEENDL;
}

void	Harl::_info(void)
{
	std::cout << RED << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << WHITEENDL;
}

void	Harl::_warning(void)
{
	std::cout << RED << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << WHITEENDL;
}

void	Harl::_error(void)
{
	std::cout << RED << "This is unacceptable ! I want to speak to the manager now." << WHITEENDL;
}

void	Harl::complain(std::string level)
{
	int	ind;

	ind = getIndexOf(_errors, level, 4);
	switch (ind)
	{
		case (0):
			(this->*ftab[0])();
			(this->*ftab[1])();
			(this->*ftab[2])();
			(this->*ftab[3])();
			break;
		case (1):
			(this->*ftab[1])();
			(this->*ftab[2])();
			(this->*ftab[3])();
			break;
		case (2):
			(this->*ftab[2])();
			(this->*ftab[3])();
			break;
		case (3):
			(this->*ftab[3])();
			break;
		default:
			std::cout << MAGENTA << "Harl doesn't know about that way to complain" << WHITEENDL;
			break;
	}
}

int	getIndexOf(std::string str[4], std::string toFind, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (str[i] == toFind)
			return (i);
	}
	return (-1);
}
