/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:06:19 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/09 11:10:56 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int	main()
{
	Bureaucrat				bernard("Bernard", 150);
	Bureaucrat				jack("Jack", 1);
	PresidentialPardonForm	form1("Macron");
	RobotomyRequestForm		form2("Macron");
	ShrubberyCreationForm	form3("Macron");

	try
	{
		form1.beSigned(jack);
		jack.executeForm(form1);
		bernard.executeForm(form1);
	}
	catch(std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}

	try
	{
		form2.beSigned(jack);
		jack.executeForm(form2);
		bernard.executeForm(form2);
	}
	catch(std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}

	try
	{
		form3.beSigned(jack);
		jack.executeForm(form3);
		bernard.executeForm(form3);
	}
	catch(std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}

	return (0);
}
