#include "Span.hpp"

void	print_vector(std::vector<int>&	v)
{
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	main(void)
{
	Span s(1000);
	std::vector<int>	v;

	try
	{
		for (int i = 0; i < 1000; ++i)
			v.push_back(i);
		s.addNumber(v.begin(), v.end());
		print_vector(v);
		//std::cout << s.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// Span sp = Span(5);

	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;

	return 0;
}