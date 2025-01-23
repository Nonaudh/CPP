#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		PresidentialPardonForm	test("Presi");
		ShrubberyCreationForm	test2("Tree");
		RobotomyRequestForm		test3("Robot");
		Bureaucrat Bob("Bob", 10);
		Bob.signAForm(test);
		Bob.executeForm(test);
		Bob.signAForm(test2);
		Bob.executeForm(test2);
		Bob.signAForm(test3);
		Bob.executeForm(test3);
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
