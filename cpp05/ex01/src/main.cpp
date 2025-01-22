#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form test("test", 50, 50);
		Bureaucrat Bob("Bob", 10);
		Bob.signForm(test);
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}