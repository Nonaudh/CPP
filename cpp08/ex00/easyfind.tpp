#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T& v, int to_find)
{
	typename T::iterator	it = std::find(v.begin(), v.end(), to_find);
	if (it != v.end())
		return (it);
	else
		throw NotFoundException();
}

const char	*NotFoundException::what() const throw()
{
	return ("occurrence not found");
}
