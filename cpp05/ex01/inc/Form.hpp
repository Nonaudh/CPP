#ifndef FORM_H
# define FORM_H

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	private :
			const std::string	_name;
			bool	_signed;
			const int	_gradeToSign;
			const int	_gradeToExe;

	public :
		Form(void);
		Form(Form& ref);
		Form(std::string name, int gradeToSign, int gradeToExe);
		Form& operator=(Form& ref);
		~Form(void);

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
};

std::ostream&	operator<<(std::ostream& out, Form& ref);

# endif