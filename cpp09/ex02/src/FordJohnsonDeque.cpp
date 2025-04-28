#include "PmergeMe.hpp"

void	JacobsthalInsertion(std::deque<int>& baseChain, std::deque<int>& smallElements)
{
	int	k = 1;

	while (!smallElements.empty())
	{
		int	tk = computeJacobsthal(k);
		if (tk < (int)baseChain.size())
		{
			if (tk < (int)smallElements.size())
			{
				std::deque<int>::iterator	pos = std::lower_bound(baseChain.begin(), baseChain.end(), smallElements[tk]);
				baseChain.insert(pos, smallElements[tk]);
				smallElements.erase(smallElements.begin() + tk);
			}
		}
		else
		{
			for (size_t i = 0; i < smallElements.size(); ++i)
			{
				std::deque<int>::iterator	pos = std::lower_bound(baseChain.begin(), baseChain.end(), smallElements[i]);
				baseChain.insert(pos, smallElements[i]);
			}
			smallElements.clear();
		}
		k++;
	}
}

// void	PmergeMe::FordJohnson(std::deque<int>& d)
// {
// 	std::deque<std::pair<int, int> >	pairs;
// 	std::deque<int>						smallElements;
	
// 	if (d.size() <= 1)
// 		return ;

// 	for (size_t i = 0; i + 1 < d.size(); i += 2)
// 	{
// 		pairs.push_back(std::make_pair(std::min(d[i], d[i + 1]), std::max(d[i], d[i + 1])));
// 	}

// 	if (d.size() % 2)
// 		smallElements.push_back(d.back());

// 	std::deque<int>	baseChain;
// 	for(size_t i = 0; i < pairs.size(); ++i)
// 	{
// 		baseChain.push_back(pairs[i].second);
// 		smallElements.push_back(pairs[i].first);
// 	}

// 	FordJohnson(baseChain);

// 	JacobsthalInsertion(baseChain, smallElements);

// 	d = baseChain;
// }

void	PmergeMe::FordJohnson(std::deque<int>& d)
{
	std::deque<int>	smallElements;
	std::deque<int>	baseChain;
	
	if (d.size() <= 1)
		return ;

	for (size_t i = 0; i + 1 < d.size(); i += 2)
	{
		smallElements.push_back(std::min(d[i], d[i + 1]));
		baseChain.push_back(std::max(d[i], d[i + 1]));
	}

	if (d.size() % 2)
		smallElements.push_back(d.back());

	FordJohnson(baseChain);

	JacobsthalInsertion(baseChain, smallElements);

	d = baseChain;
}
