#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class	Array
{
	private :
		T		*_array;
		size_t	_size;

	public :
		Array(void);
		Array(unsigned int n);
		Array(Array& ref);
		Array&	operator=(Array& ref);
		T&		operator[](int i);
		~Array(void);

		size_t	size(void) const;

	class OutOfBounds : public std::exception
	{
		public :
			const char *what() const throw();
	};
};

# include "Array.tpp"

#endif