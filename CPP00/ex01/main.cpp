/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:04:30 by tibernot          #+#    #+#             */
/*   Updated: 2023/02/27 10:26:59 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook	repertory;
	std::string	line;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			return (0);
		if (line == "ADD")
			repertory.add();
		else if(line == "SEARCH")
			repertory.search();
		else if (line == "EXIT")
			return (0);
	}
}
