#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("unnamed", 0, 25, 5)
{
	std::cout << BLACK << "PresidentialPardonForm default constructor called" << WHITEENDL;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &p) : AForm(p), _target(p.getTarget())
{
	std::cout << BLACK << "PresidentialPardonForm copy constructor called" << WHITEENDL;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("unnamed", 0, 25, 5), _target(target)
{
	std::cout << BLACK << "PresidentialPardonForm constructor with target called" << WHITEENDL;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm &p)
{
	_isSigned = p.getFormState();
	_target = p.getTarget();
	std::cout << BLACK << "PresidentialPardonForm copy assignment operator called" << WHITEENDL;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << BLACK << "PresidentialPardonForm destructor called" << WHITEENDL;
}

std::string	PresidentialPardonForm::getTarget(void)
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeToX)
		throw (GradeTooLowException());
	if (_isSigned == 0)
		throw (NotSignedFormException());
	std::cout << BLUE << _target << " has been pardonned by Zaphod Beeblebrox" << WHITEENDL;
}
