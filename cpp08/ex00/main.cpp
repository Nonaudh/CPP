#include "easyfind.hpp"


int main (void)
{
	int arr[] = {42, 69, 85, 4, 0, 25, 63, 45};
	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	try
	{
		std::cout << *easyfind(v, 69) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// try
	// {
	// 	std::vector<int>::iterator it = std::find(v.begin(), v.end(), 698);
	// 	if (it == v.end())
	// 		std::cout << "not found " << *it << std::endl;
	// 	else
	// 		std::cout << "found " << *it << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;
}