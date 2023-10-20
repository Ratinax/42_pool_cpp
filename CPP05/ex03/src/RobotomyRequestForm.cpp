#include "RobotomyRequestForm.hpp"
#include <cmath>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("unnamed", 0, 72, 45), _target("undefined target")
{
	std::cout << BLACK << "RobotomyRequestForm default constructor called" << WHITEENDL;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &r) : AForm(r), _target(r.getTarget())
{
	std::cout << BLACK << "RobotomyRequestForm copy constructor called" << WHITEENDL;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("unnamed", 0, 72, 45), _target(target)
{
	std::cout << BLACK << "RobotomyRequestForm constructor with target called" << WHITEENDL;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &r)
{
	_isSigned = r.getFormState();
	_target = r.getTarget();
	std::cout << BLACK << "RobotomyRequestForm copy assignment operator called" << WHITEENDL;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << BLACK << "RobotomyRequestForm destructor called" << WHITEENDL;
}

std::string	RobotomyRequestForm::getTarget(void)
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeToX)
		throw (GradeTooLowException());
	if (_isSigned == 0)
		throw (NotSignedFormException());
	srand(std::time(NULL));
	int	random = rand() % 2;
	if (random == 0)
		std::cout << GREEN << "*Drill sound* " << _target << " has been robotomized successfully" << WHITEENDL;
	else
		std::cout << RED << "*Drill sound* " << _target << " has failed to be robotomized." << WHITEENDL;
}
