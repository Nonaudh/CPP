#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Bob("Bob", 1);
		std::cout << Bob << std::endl;
		Bob.decrement();
		std::cout << Bob << std::endl;
		Bob.increment();
		std::cout << Bob << std::endl;
		Bob.increment();
		std::cout << Bob << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat boB("boB", 0);
		std::cout << boB << std::endl;
		Bureaucrat Bob("boB", -1);
		std::cout << Bob << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 150);
		std::cout << Bob << std::endl;
		Bob.decrement();
	
	}
	catch(std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
