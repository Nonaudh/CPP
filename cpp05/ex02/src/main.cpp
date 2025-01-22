#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		PresidentialPardonForm test("Pedro");
		Bureaucrat Bob("Bob", 10);
		Bob.signAForm(test);
		Bob.executeForm(test);
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
