/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:06:19 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/08 14:54:15 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	bernard("Bernard", 150);
	Bureaucrat	patrick("Patrick", 143);
	Bureaucrat	jack("Jack", 1);
	Form		form1("form 1", 0, 142, 50);
	Form		form2("form 1", 0, 143, 50);
	try
	{
		form1.beSigned(patrick);
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}
	try
	{
		form2.beSigned(patrick);
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}
	patrick.signForm(form1);
	jack.signForm(form1);
	std::cout << BLUE << form1 << WHITEENDL;
	std::cout << BLUE << form2 << WHITEENDL;
	return (0);
}
