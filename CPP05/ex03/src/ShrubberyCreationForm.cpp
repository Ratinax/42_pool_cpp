#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("unnamed", 0, 145, 137)
{
	std::cout << BLACK << "ShrubberyCreationForm default constructor called" << WHITEENDL;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &s) : AForm(s), _target(s.getTarget())
{
	std::cout << BLACK << "ShrubberyCreationForm copy constructor called" << WHITEENDL;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("unnamed", 0, 145, 137), _target(target)
{
	std::cout << BLACK << "ShrubberyCreationForm constructor with target called" << WHITEENDL;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &s)
{
	_isSigned = s.getFormState();
	_target = s.getTarget();
	std::cout << BLACK << "ShrubberyCreationForm copy assignment operator called" << WHITEENDL;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << BLACK << "ShrubberyCreationForm destructor called" << WHITEENDL;
}

std::string	ShrubberyCreationForm::getTarget(void)
{
	return (_target);
}

const char	*ShrubberyCreationForm::FileNotOpenException::what( void ) const throw()
{
	return ("Exception: Could not open file !");
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeToX)
		throw (GradeTooLowException());
	if (_isSigned == 0)
		throw (NotSignedFormException());

	std::ofstream	file;
	std::string		fileName;

	fileName = _target + "_shrubbery";
	file.open(fileName.c_str());
	if (!(file.is_open()))
		throw (FileNotOpenException());
	file << "               ,@@@@@@@," << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	file << "       |o|        | |         | |" << std::endl;
	file << "       |.|        | |         | |" << std::endl;
	file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	std::cout << GREEN << "Trees have been successfully created" << WHITEENDL;
}
