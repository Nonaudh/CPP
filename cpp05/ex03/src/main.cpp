#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	intern;
	AForm	*test = intern.makeForm("ShrubberyCreationForm", "JeanMich");
	AForm	*test2 = intern.makeForm("Noexist", "JeanMich");

	try
	{
		Bureaucrat Bob("Bob", 140);
		if (test)
		{
			Bob.signAForm(*test);
			Bob.executeForm(*test);

			
		}
		if (test2)
		{
			Bob.signAForm(*test2);
			Bob.executeForm(*test2);
		}
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	delete	test;
	delete	test2;
}
