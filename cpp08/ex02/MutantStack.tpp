#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP


template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{}

template <typename T>		
MutantStack<T>::MutantStack(MutantStack& ref) : std::stack<T>(ref)
{}

template <typename T>		
MutantStack<T>&	MutantStack<T>::operator=(MutantStack& ref)
{
	if (this != &ref)
		std::stack<T>::operator=(ref);
	return (*this);
}

template <typename T>		
MutantStack<T>::~MutantStack(void)
{}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>		
typename std::stack<T>::container_type::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif
