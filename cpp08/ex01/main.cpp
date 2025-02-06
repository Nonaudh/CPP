#include "Span.hpp"

void	print_vector(std::vector<int>&	v)
{
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	main(void)
{
	Span s(10000);
	Span s2(10);
	std::vector<int>	v;

	try
	{
		for (int i = 0; i < 10000; ++i)
			v.push_back(i);
		s.addNumber(v.begin(), v.end());
		// print_vector(s.get_v());
		std::cout << "longestSpan : ";
		std::cout << s.longestSpan() << std::endl;
		std::cout << "shortestSpan : ";
		std::cout << s.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		s2.addNumber(4);
		s2.addNumber(10);
		s2.addNumber(25);
		s2.addNumber(89);
		s2.addNumber(56);
		print_vector(s2.get_v());
		std::cout << "longestSpan : ";
		std::cout << s2.longestSpan() << std::endl;
		std::cout << "shortestSpan : ";
		std::cout << s2.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}