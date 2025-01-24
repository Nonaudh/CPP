#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class NotFoundException : public std::exception
{
	const char	*what() const throw();
};

template<typename T>
typename T::iterator easyfind(T& v, int to_find);

# include "easyfind.tpp"

#endif