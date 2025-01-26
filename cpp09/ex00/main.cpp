#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	BitcoinExchange wallet;

	(void)argc;
	wallet.btc(argv[1]);
}
