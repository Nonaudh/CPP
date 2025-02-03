#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename T_func>
void	iter(T& array, std::size_t const lenght, T_func& funct)
{
	for (size_t i = 0; i < lenght; i++)
		funct(array[i]);
}

#endif
