#include "PmergeMe.hpp"

void	JacobsthalInsertion(std::vector<int>& baseChain, std::vector<int>& smallElements)
{
	int	k = 1;

	while (!smallElements.empty())
	{
		int	tk = computeJacobsthal(k);
		if (tk < (int)baseChain.size())
		{
			if (tk < (int)smallElements.size())
			{
				std::vector<int>::iterator	pos = std::lower_bound(baseChain.begin(), baseChain.end(), smallElements[tk]);
				baseChain.insert(pos, smallElements[tk]);
				smallElements.erase(smallElements.begin() + tk);
			}
		}
		else
		{
			for (size_t i = 0; i < smallElements.size(); ++i)
			{
				std::vector<int>::iterator	pos = std::lower_bound(baseChain.begin(), baseChain.end(), smallElements[i]);
				baseChain.insert(pos, smallElements[i]);
			}
			smallElements.clear();
		}
		k++;
	}
}

void	PmergeMe::FordJohnson(std::vector<int>& v)
{
	std::vector<std::pair<int, int> >	pairs;
	std::vector<int>					smallElements;
	
	if (v.size() <= 1)
		return ;

	for (size_t i = 0; i + 1 < v.size(); i += 2)
	{
		pairs.push_back(std::make_pair(std::min(v[i], v[i + 1]), std::max(v[i], v[i + 1])));
	}

	if (v.size() % 2)
		smallElements.push_back(v.back());

	std::vector<int>	baseChain;
	for(size_t i = 0; i < pairs.size(); ++i)
	{
		baseChain.push_back(pairs[i].second);
		smallElements.push_back(pairs[i].first);
	}

	FordJohnson(baseChain);

	JacobsthalInsertion(baseChain, smallElements);

	v = baseChain;
}
