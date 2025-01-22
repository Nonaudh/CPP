#ifndef AFORM_H
# define AFORM_H

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm
{
	private :
			const std::string	_name;
			bool	_signed;
			const int	_gradeToSign;
			const int	_gradeToExe;
			virtual void	form_action(void) const = 0;

	public :
		AForm(void);
		AForm(AForm& ref);
		AForm(std::string name, int gradeToSign, int gradeToExe);
		AForm& operator=(AForm& ref);
		virtual ~AForm(void);

		void	execute(Bureaucrat const& executor) const;
		std::string getName(void) const;
		bool		getSign(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExe(void) const;
		void		beSigned(Bureaucrat& ref);

		class GradeTooHighException : public std::exception
		{
			public :
					const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
					const char *what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			public :
					const char *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, AForm& ref);

# endif