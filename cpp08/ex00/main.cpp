#include "easyfind.hpp"


int main (void)
{
	int arr[] = {42, 69, 85, 4, 0, 25, 63, 45};
	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
	char carr[] = {'a', 'b', 'c', 'd'};
	std::vector<char> c(carr, carr + sizeof(carr) / sizeof(char));

	try
	{
		std::cout << *easyfind(v, 85) << std::endl;
		std::cout << *easyfind(v, 55) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(c, 'a') << std::endl;
		std::cout << *easyfind(c, 'l') << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}