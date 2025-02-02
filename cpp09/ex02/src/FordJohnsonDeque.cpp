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

void	PmergeMe::FordJohnson(std::deque<int>& p)
{
	std::deque<std::pair<int, int> >	pairs;
	std::deque<int>						smallElements;
	
	if (p.size() <= 1)
		return ;

	for (size_t i = 0; i + 1 < p.size(); i += 2)
	{
		pairs.push_back(std::make_pair(std::min(p[i], p[i + 1]), std::max(p[i], p[i + 1])));
	}

	if (p.size() % 2)
		smallElements.push_back(p.back());

	std::deque<int>	baseChain;
	for(size_t i = 0; i < pairs.size(); ++i)
	{
		baseChain.push_back(pairs[i].second);
		smallElements.push_back(pairs[i].first);
	}

	FordJohnson(baseChain);

	// std::vector<int>	sortedResult = baseChain;
	// for (size_t i = 0; i < smallElements.size(); ++i)
	// {
	// 	std::vector<int>::iterator pos = std::lower_bound(sortedResult.begin(), sortedResult.end(), smallElements[i]);
	// 	sortedResult.insert(pos, smallElements[i]);
	// }

	JacobsthalInsertion(baseChain, smallElements);

	p = baseChain;

	// v = sortedResult;
}
