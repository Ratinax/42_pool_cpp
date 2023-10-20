/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:22:07 by tibernot          #+#    #+#             */
/*   Updated: 2023/02/27 10:27:24 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _contactInd(0)
{

}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::add(void)
{
	std::string	line[5];
	std::string	infos[5] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};

	std::cout << "Let me discover your new contact :" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << infos[i] << " : ";
		std::getline(std::cin, line[i]);
		if (std::cin.eof())
			return ;
		if (line[i] == "")
		{
			std::cout << "Must not be an empty input" << std::endl;
			i--;
		}
	}
	_contact[_contactInd % 8].setFirstName(line[0]);
	_contact[_contactInd % 8].setLastName(line[1]);
	_contact[_contactInd % 8].setNickName(line[2]);
	_contact[_contactInd % 8].setPhoneNumber(line[3]);
	_contact[_contactInd % 8].setDarkestSecret(line[4]);
	_contactInd++;
	if (_contactInd == 16)
		_contactInd = 8;
}

void	PhoneBook::_putString(std::string str)
{
	if (str.length() <= 9)
	{
		for (int i = 0; i < static_cast<int>(10 - str.length()); i++)
		{
			std::cout << " ";
		}
		std::cout << str;
	}
	else
		std::cout << str.substr(0, 9) << ".";
}

void	PhoneBook::_putInt(int nb)
{
	std::cout << "         " << nb;
}

void	PhoneBook::search(void)
{
	std::string	line;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8 && i < _contactInd; i++)
	{
		std::cout << "|";
		_putInt(i);
		std::cout << "|";
		_putString(_contact[i].getFirstName());
		std::cout << "|";
		_putString(_contact[i].getLastName());
		std::cout << "|";
		_putString(_contact[i].getNickName());
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "If you want to get the infos of a user enter his index : ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		return ;
	if ((line != "") && (line.length() == 1 && line >= "0" && line <= "7" && static_cast<int>(line[0] - 48) < _contactInd))
		std::cout << _contact[static_cast<int>(line[0] - 48)];
	else
		std::cout << "Sorry I don't have this index in my database" << std::endl;
}

