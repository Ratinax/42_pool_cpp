#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << BLACK << "Intern default constructor called" << WHITEENDL;
}

Intern::Intern(const Intern &i)
{
	(void) i;
	std::cout << BLACK << "Intern copy constructor called" << WHITEENDL;
}

Intern	&Intern::operator=(const Intern &i)
{
	(void) i;
	std::cout << BLACK << "Intern copy assignment operator called" << WHITEENDL;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << BLACK << "Intern destructor called" << WHITEENDL;
}

AForm	*Intern::createPresidentialPardonForm(const std::string &target) const
{
	return new PresidentialPardonForm(target);
}

AForm	*Intern::createRobotomyRequestForm(const std::string &target) const
{
	return new RobotomyRequestForm(target);
}

AForm	*Intern::createShrubberyCreationForm(const std::string &target) const
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm *(Intern::*createFunctions[])(const std::string &target) const =
	{
		&Intern::createPresidentialPardonForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createShrubberyCreationForm
	};

	std::string	tabString[3] = {"robotmy request", "presidential pardon", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (tabString[i] == formName)
		{
			try
			{
				AForm	*form = (this->*createFunctions[i])(formTarget);
				std::cout << GREEN << "Intern creates " << formName << WHITEENDL;
				return (form);
			}
			catch (std::exception &e)
			{
				std::cout << YELLOW << e.what() << WHITEENDL;
			}
		}
	}
	std::cout << RED << "Intern coudn't create form" << WHITEENDL;
	return (NULL);
}
