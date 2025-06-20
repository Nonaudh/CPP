#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <ctime>
# include <typeinfo>
# include <deque>
# include <exception>
# include <cctype>

class	PmergeMe
{
	private :
		PmergeMe(void);
		PmergeMe(PmergeMe& ref);
		PmergeMe&	operator=(PmergeMe& ref);
		~PmergeMe(void);

	public :
		static void	FordJohnson(std::vector<int>& v);
		static void	FordJohnson(std::deque<int>& d);
};

void	JacobsthalInsertion(std::deque<int>& baseChain, std::deque<int>& smallElements);
void	JacobsthalInsertion(std::vector<int>& baseChain, std::vector<int>& smallElements);

int		computeJacobsthal(int k);
bool	check_digit(char *str);
void	parseInput(std::vector<int>& v, int argc, char **argv);

template<typename T>
const char	*getTypeId(T& t);

template<typename T>
void		timeElapsed(T& t, std::clock_t start, std::clock_t end);

template <typename T>
void	printContainer(T& t);

# include "PmergeMe.tpp"

#endif
