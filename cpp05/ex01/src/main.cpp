#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form test("test", 50, 50);
		std::cout << test << std::endl;
		Bureaucrat Bob("Bob", 10);
		Bob.signForm(test);
		std::cout << std::endl << test << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		Form test("test", 50, 50);
		Bureaucrat Bob("Bob", 100);
		Bob.signForm(test);
	}
	catch(std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Form test("test", 1, 151);
	}
	catch(std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}