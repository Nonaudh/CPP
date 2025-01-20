#include "iter.hpp"

void	times_two(int& ref)
{
	ref *= 2;
}

int	main(void)
{
	int	test[] = {0, 1, 2, 3};

	::iter(test, 4, times_two);

	for (int i = 0; i < 4; ++i)
		std::cout << test[i] << std::endl;
}