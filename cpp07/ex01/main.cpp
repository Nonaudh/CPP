#include "iter.hpp"

void	times_two(int& ref)
{
	ref *= 2;
}

void	plus_iter(std::string& str)
{
	str += "_iter";
}

int	main(void)
{
	int	test[] = {0, 1, 2, 3};
	std::string str[] = {"salut", "les", "potes", "!"};

	::iter (test, 4, times_two);
	::iter (str, 4, plus_iter);

	for (size_t i = 0; i < 4; ++i)
		std::cout << test[i] << "  ";
	std::cout << std::endl;

	for (size_t i = 0; i < 4; ++i)
		std::cout << str[i] << "  ";
	std::cout << std::endl;
}
