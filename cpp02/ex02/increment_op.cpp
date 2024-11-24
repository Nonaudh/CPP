#include "Fixed.hpp"

Fixed&	Fixed::operator++()
{
	++this->_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	
	++this->_value;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	--this->_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	
	--this->_value;
	return (tmp);
}
