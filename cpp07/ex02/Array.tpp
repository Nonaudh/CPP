#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	for (int i = 0; i < n; ++i)
		_array[i] = 0;
}

template <typename T>
Array<T>::Array(Array& ref) : _array(new T[ref._size]), _size(ref._size)
{
	for (int i = 0; i < ref._size; ++i)
		this->_array[i] = ref._array[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(Array& ref)
{
	if (&ref != this)
	{
		delete[] this->_array;
		this->_array = new T[ref._size];
		this->_size = ref._size;
		for (int i = 0; i < ref._size; ++i)
			this->_array[i] = ref._array[i];
	}
	return (*this);
}

template <typename T>
T&		Array<T>::operator[](int i)
{
	if (i > -1 && i < this->_size)
		return (this->_array[i]);
	throw
		OutOfBounds();
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
	return ("Out of bounds");
}

#endif
