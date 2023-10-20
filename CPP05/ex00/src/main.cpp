/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:06:19 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/06 16:42:54 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	bernard("Bernard", 150);
	Bureaucrat	jack("Jack", 1);

	try
	{
		Bureaucrat michel("Michel", -10);
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}
	try
	{
		Bureaucrat michel("Michel", 151);
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}
	/*----------*/
	try
	{
		bernard.downGrade();
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}
	try
	{
		jack.upGrade();
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}
	std::cout << GREEN << bernard << WHITEENDL;
	std::cout << GREEN << jack << WHITEENDL;
	return (0);
}
