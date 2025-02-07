# include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc == 1)
	{
		std::cout << "Usage : ./PmergeMe 'positive integer sequence'" << std::endl;
		return (0);
	}
	try
	{
		std::clock_t	start = std::clock();
		std::vector<int> v;
		parseInput(v, argc, argv);
		printContainer(v);
		std::cout << std::endl;
		PmergeMe::FordJohnson(v);
		std::clock_t	end = std::clock();
		printContainer(v);
		std::cout << std::endl;
		timeElapsed(v, start, end);

		std::cout << std::endl;

		start = std::clock();
		std::deque<int> d(v.begin(), v.end());
		PmergeMe::FordJohnson(d);
		end = std::clock();
		timeElapsed(d, start, end);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}