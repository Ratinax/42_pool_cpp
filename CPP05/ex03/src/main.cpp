/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:06:19 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/10 11:08:03 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat				jack("Jack", 1);
	Intern	slave;
	AForm	*form1;
	AForm	*wrongForm;

	form1 = slave.makeForm("shrubbery creation", "test");
	wrongForm = slave.makeForm("shrubery creation", "test");

	form1->beSigned(jack);
	form1->execute(jack);
	try
	{
		if (!(wrongForm == NULL))
		{
			wrongForm->beSigned(jack);
			wrongForm->execute(jack);
		}
		delete wrongForm;
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << e.what() << WHITEENDL;
	}
	delete form1;
	return (0);
}
