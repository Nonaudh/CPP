#include "MutantStack.hpp"
#include <vector>

int	main(void)
{
	MutantStack<int> mstack;
	MutantStack<int> copy;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	copy = mstack;

	MutantStack<int>::iterator it = copy.begin();
	MutantStack<int>::iterator ite = copy.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\n-------------------------------\n\n";

	std::vector<int> v;

	v.push_back(5);
	v.push_back(17);
	std::cout << v.back() << std::endl;
	v.pop_back();
	std::cout << v.size() << std::endl;
	v.push_back(3);
	v.push_back(5);
	v.push_back(737);
	v.push_back(0);

	std::vector<int>::iterator itv = v.begin();
	std::vector<int>::iterator itev = v.end();

	++itv;
	--itv;

	while (itv != itev)
	{
		std::cout << *itv << std::endl;
		++itv;
	}

	return 0;
}