#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	private :
			std::string	_target;
			void		form_action(void) const;
	
	public :
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(ShrubberyCreationForm& ref);
			ShrubberyCreationForm& operator=(ShrubberyCreationForm& ref);
			~ShrubberyCreationForm(void);

		class CantOpenFile : public std::exception
		{
			public :
					const char *what() const throw();
		};	
};

# endif
