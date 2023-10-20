/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:45:17 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/14 11:42:58 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	Array <int>array(20);
	Array <std::string>arrayString(5);

	for (int i = 0; i < 20; i++)
	{
		array[i] = i;
	}
	for (int i = 0; i < 20; i++)
	{
		std::cout << BLUE << array[i] << WHITEENDL;
	}
	arrayString[0] = "this";
	arrayString[1] = "is";
	arrayString[2] = "a";
	arrayString[3] = "huge";
	arrayString[4] = "example";
	for (int i = 0; i < 6; i++)
	{
		try
		{
			std::cout << BLUE << arrayString[i] << WHITEENDL;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << WHITEENDL;
		}
	}
}
