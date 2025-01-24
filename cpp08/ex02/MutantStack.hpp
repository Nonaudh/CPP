#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public :
		MutantStack(void);
		MutantStack(MutantStack& ref);
		MutantStack&	operator=(MutantStack& ref);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void);
		iterator end(void);
};

# include "MutantStack.tpp" 

#endif