#include "Array.hpp"

template <typename T>
void	print_array(Array<T>& ref)
{
	try
	{
		for (int i = 0; i != -1; ++i)
			std::cout << "i; " << i << "  " << static_cast<char>(ref[i]) << "  ";
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

	// test2[0] = 69;
	print_array(test2);

	test = test2;

	print_array(test);


	print_array(test3);

}