/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:58:20 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/10 16:28:42 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <Bureaucrat.hpp>

class Bureaucrat;

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

class	AForm {

	protected :
		std::string const	_name;
		bool				_isSigned;
		int	const			_gradeToS;
		int	const			_gradeToX;
	public :
		AForm(void);
		AForm(std::string name, bool isSigned, int gradeToS, int gradeToX);
		AForm(const AForm &f);
		AForm &operator=(const AForm &f);
		virtual	~AForm(void);

		std::string		getName() const;
		bool			getFormState() const;
		int				getGradeToS() const;
		int				getGradeToX() const;
		void			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};

		class NotSignedFormException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};
};

std::ostream &operator<<(std::ostream &out, AForm &f);

#endif
