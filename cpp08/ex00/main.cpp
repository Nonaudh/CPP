#include "easyfind.hpp"


int main (void)
{
	int arr[] = {42, 69, 85, 4, 0, 25, 63, 45};
	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	try
	{
		std::cout << *easyfind(v, 69) << std::endl;
		std::cout << *easyfind(v, 169) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}