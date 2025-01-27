# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	_readDatabase();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& ref)
{
	(void)ref;
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange& ref)
{
	(void)ref;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{

}

void	BitcoinExchange::_readDatabase(void)
{
	std::string	line;
	std::string date;
	std::string price;
	double		d_price;

	std::ifstream file("data.csv");
	if (!file.is_open())
		std::cerr << "Exception needed not open\n";
	
	std::getline(file, line);
	if (line != "date,exchange_rate")
		std::cerr << "Exception needed date|price\n";
	while (std::getline(file, line))
	{
		std::istringstream sline(line);
		std::getline(sline, date, ',');
		std::getline(sline, price);
		std::istringstream sprice(price);
		if (!(sprice >> d_price))
			std::cerr << "Exception needed not a number\n";
		this->_data[date] = d_price;
	}
	file.close();
}

bool	IsInvalid(char c)
{
	return (!isdigit(c) && c != '-');
}

int	bad_input_tmp(std::string date)
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
	if (year < 0 || year > 9999 || month < 0 || month > 12 || day < 0 || day > 31)
		return (1);
	return (0);
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
		std::cout << "Error mktime\n";
		return (1);
	}
	if (timeinfo.tm_year != year - 1900 || timeinfo.tm_mon != month - 1 || timeinfo.tm_mday != day)
		return (1);
	return (0);
}

int	bad_price(double price)
{	
	if (price < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (1);
	}	
	if (price > INT_MAX)
	{
		std::cerr << "Error: too large number." << std::endl;
		return (1);
	}
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

bool	isSpaceOrTab(char c)
{
	return (c == ' ' || c == '\t');
}

int	bad_line(std::string line)
{
	if (std::find_if(line.begin(), line.end(), IsInvalid) == line.end())
		return (0);
	return (1);
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
		std::cerr << "Exception needed notOpen\n";
		return ;
	}
	std::getline(file, line);
	line.erase(std::remove_if(line.begin(), line.end(), isSpaceOrTab), line.end());
	if (line != "date|value")
		std::cerr << "Exception needed date|value\n";

	while (std::getline(file, line))
	{
		line.erase(std::remove_if(line.begin(), line.end(), isSpaceOrTab), line.end());
		std::istringstream sline(line);
		std::getline(sline, date, '|');
		if (bad_input(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		std::getline(sline, price);
		std::istringstream sPrice(price);
		if (!(sPrice >> d_price) || bad_price(d_price))
			continue;
		_calculate_bitcoin_amount(date, d_price);
	}
}
