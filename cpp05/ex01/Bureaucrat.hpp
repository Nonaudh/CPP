#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class   Bureaucrat
{
	private :
		std::string const	_name;
		int	_grade;

	public :
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& ref);
		Bureaucrat&	operator=(Bureaucrat& ref);
		~Bureaucrat(void);

		std::string	getName(void) const;
		int 		getGrade(void) const;

		void	decrement(void);
		void	increment(void);
		void	signForm(Form& ref);

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

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& ref);

# endif