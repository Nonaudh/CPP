# include "PmergeMe.hpp"

bool	check_digit(char *str)
{
	int i;

	for (i = 0; str[i] && isdigit(str[i]); ++i)
		;
	return (str[i]);
}

int	computeJacobsthal(int k)
{
	int	power = (1 << (k + 1));
	int	sign = (k % 2 == 0) ? 1 : -1;
	return ((power + sign) / 3);
}

void	parseInput(std::vector<int>& v, int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
	{
		if (check_digit(argv[i]))
		{
			std::cerr << "'" << argv[i] << "' ";
			throw std::runtime_error("Error : Not a positive number");
		}
		int	nb = atoi(argv[i]);
		v.push_back(nb);
	}
}
