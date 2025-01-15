#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern intern;
		AForm *test = intern.makeForm("NOP", "JeanMich");
		(void) test;
		// Bureaucrat Bob("Bob", 1);
		// Bob.signAForm(*test);
		// Bob.executeForm(*test);
		// delete test;
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
