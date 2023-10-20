/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:58:24 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/10 16:46:51 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) :
_name("unnamed"),
_isSigned(0),
_gradeToS(42),
_gradeToX(21)
{
	std::cout << BLACK << "AForm default constructor called" << WHITEENDL;
}

AForm::AForm(const AForm &f) :
_name(f._name),
_isSigned(f._isSigned),
_gradeToS(f._gradeToS),
_gradeToX(f._gradeToX)
{
	std::cout << BLACK << "AForm copy constructor called" << WHITEENDL;
}

AForm::AForm(std::string name, bool isSigned, int gradeToS, int gradeToX) :
_name(name),
_isSigned(isSigned),
_gradeToS(gradeToS),
_gradeToX(gradeToX)
{
	std::cout << BLACK << "AForm constructor with params called" << WHITEENDL;
}

AForm	&AForm::operator=(const AForm &f)
{
	_isSigned = f._isSigned;
	std::cout << BLACK << "AForm copy assignment operator called" << WHITEENDL;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << BLACK << "AForm destructor called" << WHITEENDL;
}

const char	*AForm::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: Grade too high!");
}

const char	*AForm::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: Grade too low!");
}

const char	*AForm::NotSignedFormException::what( void ) const throw()
{
	return ("Exception: form not signed !");
}

std::string	AForm::getName() const
{
	return (_name);
}
bool	AForm::getFormState() const
{
	return (_isSigned);
}
int	AForm::getGradeToS() const
{
	return (_gradeToS);
}
int	AForm::getGradeToX() const
{
	return (_gradeToX);
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (_gradeToS < b.getGrade())
		throw (GradeTooLowException());
	if (_isSigned == 0)
		std::cout << GREEN << _name << " AForm has been signed by " << b.getName() << WHITEENDL;
	_isSigned = 1;
}

std::ostream &operator<<(std::ostream &out, AForm &f)
{
	if (f.getFormState() == 1)
		out << "Signed";
	else
		out << "Not signed";
	out << " AForm " << f.getName() << " has a grade to sign of " << f.getGradeToS() << " and a grade to execute of " << f.getGradeToX();
	return (out);
}
