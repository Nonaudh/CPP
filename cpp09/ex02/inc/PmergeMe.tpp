#ifndef PMERGEME_TPP
# define PMERGEME_TPP

# include "PmergeMe.hpp"

template <typename T>
const char	*getTypeId(T& t)
{
	if (typeid(t) == typeid(std::vector<int>))
		return ("vector");
	if (typeid(t) == typeid(std::deque<int>))
		return ("deque");
	return ("other");
}

template <typename T>
void	timeElapsed(T& t, std::clock_t start, std::clock_t end)
{
	std::cout << "Time to process a range of " << t.size()
	<< " elements with std::" << getTypeId(t) << " : "
	<< double(end - start) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}

template <typename T>
void	printContainer(T& t)
{
	typename T::iterator it;

	for (it = t.begin(); it != t.end() && (t.size() <= 10 || it != t.begin() + 5); ++it)
		std::cout << *it << "  ";
	if (it != t.end())
		std::cout << "[...]";
	std::cout << std::endl;
}

#endif