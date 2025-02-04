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
		print_vector(s.get_v());
		std::cout << "longestSpan : ";
		std::cout << s.longestSpan() << std::endl;
		std::cout << "shortestSpan : ";
		std::cout << s.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}