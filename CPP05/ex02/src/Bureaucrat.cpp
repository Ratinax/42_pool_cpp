/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:06:27 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/10 16:37:07 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Undefinded"), _grade(1)
{
	std::cout << BLACK << "Bureaucrat default constructor called" << WHITEENDL;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > _minGrade)
		throw (GradeTooLowException());
	else if (grade < _maxGrade)
		throw (GradeTooHighException());
	std::cout << BLACK << "Bureaucrat constructor with params called" << WHITEENDL;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name), _grade(b._grade)
{
	std::cout << BLACK << "Bureaucrat copy constructor called" << WHITEENDL;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	_grade = b._grade;
	std::cout << BLACK << "Bureaucrat copy assignment operator called" << WHITEENDL;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << BLACK << "Bureaucrat destructor called" << WHITEENDL;
}

std::string const	Bureaucrat::getName(void)
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::upGrade(void)
{
	if (_grade - 1 < _maxGrade)
		throw (GradeTooHighException());
	_grade--;
}

void	Bureaucrat::downGrade(void)
{
	if (_grade + 1 > _minGrade)
		throw (GradeTooLowException());
	_grade++;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << GREEN << _name << " executed " << form.getName() << WHITEENDL;
	}
	catch (std::exception &e)
	{
		std::cout << RED << _name << " couldn't execute " << form.getName() << " because of " << e.what() << WHITEENDL;
	}
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << GREEN << _name << " signed " << f.getName() << WHITEENDL;
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW << _name << " couldn't sign form " << f.getName() << " beacause grade too low" << WHITEENDL;
	}
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: Grade too low!");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << WHITE;
	return (out);
}
