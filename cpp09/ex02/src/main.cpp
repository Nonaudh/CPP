# include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	// int arr[] = {42, 69, 85, 4, 0, 25, 42, 45};
	// std::deque<int> d(arr, arr + sizeof(arr) / sizeof(int));
	// (void)argc;
	// (void)argv;

	try
	{
		std::clock_t	start = std::clock();

		std::vector<int> v;
		parseInput(v, argc, argv);

		printContainer(v);

		std::cout << std::endl;

		PmergeMe::FordJohnson(v);
		// std::sort(v.begin(), v.end());

		std::clock_t	end = std::clock();

		printContainer(v);

		std::cout << std::endl;

		timeElapsed(v, start, end);


		start = std::clock();

		std::deque<int> d;
		parseInput(d, argc, argv);

		PmergeMe::FordJohnson(d);
		// std::sort(d.begin(), d.end());

		end = std::clock();

		std::cout << std::endl;

		timeElapsed(d, start, end);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}