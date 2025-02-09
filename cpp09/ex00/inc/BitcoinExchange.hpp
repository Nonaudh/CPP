#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <climits>
# include <cctype>
# include <ctime>

class	BitcoinExchange
{
	private :
		std::map<std::string, double>	_data;
		int		_readDatabase(void);
		void	_calculate_bitcoin_amount(std::string date, double price);

	public :
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange& ref);
		BitcoinExchange&	operator=(BitcoinExchange& ref);
		~BitcoinExchange(void);

		void	btc(const char* filename);
};


bool	isSpaceOrTab(char c);
int		bad_line(std::string line);
int		bad_price_tmp(double price);
int		bad_price(std::istringstream& sPrice);
bool	IsInvalid(char c);

#endif
