#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat Bob("Bob", 1);

	try
	{
		Bob.increment();
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << Bob;
}