#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN c;

	if (argc == 2)
	{
		try
		{
			c.ReversePolish(argv[1]);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	else
		std::cout << "Enter one argument" << std::endl;

	return(0);
}