#include "Form.hpp"

Form::Form(void) :
_name("unnamed"),
_isSigned(0),
_gradeToS(42),
_gradeToX(21)
{
	std::cout << BLACK << "Form default constructor called" << WHITEENDL;
}

Form::Form(const Form &f) :
_name(f._name),
_isSigned(f._isSigned),
_gradeToS(f._gradeToS),
_gradeToX(f._gradeToX)
{
	std::cout << BLACK << "Form copy constructor called" << WHITEENDL;
}

Form::Form(std::string name, bool isSigned, int gradeToS, int gradeToX) :
_name(name),
_isSigned(isSigned),
_gradeToS(gradeToS),
_gradeToX(gradeToX)
{
	std::cout << BLACK << "Form constructor with params called" << WHITEENDL;
}

Form	&Form::operator=(const Form &f)
{
	_name = f._name;
	_isSigned = f._isSigned;
	_gradeToS = f._gradeToS;
	_gradeToX = f._gradeToX;
	std::cout << BLACK << "Form copy assignment operator called" << WHITEENDL;
	return (*this);
}

Form::~Form(void)
{
	std::cout << BLACK << "Form destructor called" << WHITEENDL;
}

const char	*Form::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: Grade too high!");
}

const char	*Form::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: Grade too low!");
}

std::string	Form::getName()
{
	return (_name);
}
bool	Form::getFormState()
{
	return (_isSigned);
}
int	Form::getGradeToS()
{
	return (_gradeToS);
}
int	Form::getGradeToX()
{
	return (_gradeToX);
}

void	Form::beSigned(Bureaucrat &b)
{
	if (_gradeToS < b.getGrade())
		throw (GradeTooLowException());
	if (_isSigned == 0)
		std::cout << GREEN << _name << " form has been signed by " << b.getName() << WHITEENDL;
	_isSigned = 1;
}

std::ostream &operator<<(std::ostream &out, Form &f)
{
	if (f.getFormState() == 1)
		out << "Signed";
	else
		out << "Not signed";
	out << " form " << f.getName() << " has a grade to sign of " << f.getGradeToS() << " and a grade to execute of " << f.getGradeToX();
	return (out);
}
