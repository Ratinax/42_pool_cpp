#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

# define WHITEENDL   std::endl << WHITE
# define BLACK			"\033[0m\033[30m"
# define RED			"\033[0m\033[31m"
# define GREEN			"\033[0m\033[32m"
# define YELLOW			"\033[0m\033[33m"
# define BLUE			"\033[0m\033[34m"
# define MAGENTA		"\033[0m\033[35m"
# define CYAN			"\033[0m\033[36m"
# define WHITE			"\033[0m\033[37m"
# define BOLDBLACK		"\033[1m\033[30m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

class	RobotomyRequestForm : public AForm {

	private :
		std::string	_target;
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &r);
		RobotomyRequestForm &operator=(RobotomyRequestForm &r);
		~RobotomyRequestForm(void);

		std::string	getTarget(void);
		void	execute(Bureaucrat const & executor) const;
};

#endif
