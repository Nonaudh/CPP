# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	_readDatabase();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& ref)
{
	this->_data = ref._data;
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange& ref)
{
	this->_data = ref._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{}

void	BitcoinExchange::_readDatabase(void)
{
	std::string	line;
	std::string date;
	std::string price;
	double		d_price;

	std::ifstream file("data.csv");
	if (!file.is_open())
	{
		std::cerr << "Can't open file data.csv : default value used" << std::endl;
		this->_data["42"] = 0;
		return ;
	}
	while (std::getline(file, line))
	{
		if (line == "date,exchange_rate")
			continue ;
		std::istringstream sline(line);
		std::getline(sline, date, ',');
		std::getline(sline, price);
		std::istringstream sprice(price);
		sprice >> d_price;
		this->_data[date] = d_price;
	}
	file.close();
}

int	bad_input(std::string date)
{
	int	year, month, day;

	if (std::find_if(date.begin(), date.end(), IsInvalid) != date.end())
		return (1);
	if (date.size() != 10 || date[4] != '-'|| date[7] != '-' )
		return (1);

	std::istringstream sYear(date.substr(0,4));
	std::istringstream sMonth(date.substr(5,2));
	std::istringstream sDay(date.substr(8,2));

	if (!(sYear >> year) || !(sMonth >> month) || !(sDay >> day))
		return (1);
	
	std::tm	timeinfo = {};

	timeinfo.tm_year = year - 1900;
	timeinfo.tm_mon = month - 1;
	timeinfo.tm_mday = day;
	
	if (std::mktime(&timeinfo) == -1)
	{
		std::cerr << "Error mktime" << std::endl;
		return (1);
	}
	if (timeinfo.tm_year != year - 1900 || timeinfo.tm_mon != month - 1 || timeinfo.tm_mday != day)
		return (1);
	return (0);
}

void	BitcoinExchange::_calculate_bitcoin_amount(std::string date, double price)
{
	std::map<std::string, double>::iterator it;

	it = this->_data.find(date);
	if (it != _data.end())
	{
		std::cout << date << " => " << price << " = " << price * it->second << std::endl;
	}
	else
	{
		it = this->_data.lower_bound(date);
		if (it == _data.begin())
			std::cout << date << " => " << price << " = " << price * it->second << std::endl;	
		else
		{
			it--;
			std::cout << date << " => " << price << " = " << price * it->second << std::endl;
		}
	}
}

void	BitcoinExchange::btc(const char *filename)
{
	std::string	line;
	std::string date;
	std::string price;
	double		d_price;

	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Can't open "<< filename << std::endl;
		return ;
	}
	while (std::getline(file, line))
	{
		line.erase(std::remove_if(line.begin(), line.end(), isSpaceOrTab), line.end());
		if (line == "date|value")
			continue ;
		std::istringstream sline(line);
		std::getline(sline, date, '|');
		if (bad_input(date))
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue;
		}
		std::getline(sline, price);
		std::istringstream sPrice(price);
		if (!(sPrice >> d_price))
		{
			std::cout << "Error: not a number => " << price << std::endl;
			continue ;
		}
		if (bad_price(d_price))
			continue;
		_calculate_bitcoin_amount(date, d_price);
	}
}
