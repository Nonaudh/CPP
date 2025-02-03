#include "Array.hpp"

template <typename T>
void	print_array(Array<T>& ref)
{
	try
	{
		for (int i = 0; i != -1; ++i)
			std::cout << ref[i] << "  ";
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	Array<int> test;
	Array<int> test2(5);
	Array<int> test3(test2);

	for (size_t i = 0; i < test2.size(); ++i)
		test2[i] = 42;

	std::cout << "test2:\n";
	print_array(test2);

	test = test2;

	std::cout << "test:\n";
	print_array(test);

	std::cout << "test3:\n";
	print_array(test3);

}