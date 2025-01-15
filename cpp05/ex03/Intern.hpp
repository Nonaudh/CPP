#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
// # include "PresidentialPardonForm.hpp"
// # include "RobotomyRequestForm.hpp"
// # include "ShrubberyCreationForm.hpp"

class	Intern
{
	public :
		Intern(void);
		Intern(Intern& ref);
		Intern& operator=(Intern& ref);
		~Intern(void);

		AForm	*makeForm(std::string form_name, std::string form_target);
};

# endif