#include "BitcoinExchange.hpp"

int	main(int argc , char **argv)
{	
	BitcoinExchange wallet;

	if (argc == 2)
	{
		try
		{
			wallet.btc(argv[1]);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage : ./BitcoinExchange 'input'" << std::endl;
}
