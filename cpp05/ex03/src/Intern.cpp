#include "Intern.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{

}

Intern::Intern(Intern& ref)
{
	(void)ref;
}

Intern& Intern::operator=(Intern& ref)
{
	(void)ref;
	
	return (*this);
}

Intern::~Intern(void)
{

}

AForm	*Intern::makeForm(std::string form_name, std::string form_target)
{
	int i = 0;
	std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while (i < 3 && form_name != forms[i])
		i++;
	
	switch (i)
	{
		case(0):
			std::cout << "Intern creates " << form_name << std::endl;
			return (new ShrubberyCreationForm(form_target));
		
		case(1):
			std::cout << "Intern creates " << form_name << std::endl;
			return (new RobotomyRequestForm(form_target));

		case(2):
			std::cout << "Intern creates " << form_name << std::endl;
			return (new PresidentialPardonForm(form_target));

		default :
			std::cout << form_name << " Form does not exist" << std::endl;
			return (NULL);
	}
}
