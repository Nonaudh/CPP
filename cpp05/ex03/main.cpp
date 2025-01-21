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
		AForm *test = intern.makeForm("ShrubberyCreationForm", "JeanMich");
		if (!test)
			return (0);
		Bureaucrat Bob("Bob", 1);
		Bob.signAForm(*test);
		Bob.executeForm(*test);

		AForm *test2 = intern.makeForm("Noexist", "JeanMich");
		if (!test2)
			return (0);
		// Bob.signAForm(*test);
		// Bob.executeForm(*test);
		delete	test;
		delete	test2;
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
