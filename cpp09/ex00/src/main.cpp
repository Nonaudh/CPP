#include "BitcoinExchange.hpp"

int	main(int argc , char **argv)
{	

	if (argc == 2)
	{
		BitcoinExchange wallet;
		
		wallet.btc(argv[1]);
	}
	else
		std::cout << "Usage : ./BitcoinExchange 'input.txt'" << std::endl;
}
