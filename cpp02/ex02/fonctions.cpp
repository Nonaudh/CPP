#include "Fixed.hpp"

int Fixed::getRawBits(void) const 
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw) 
{
	this->_value = raw;
}

float   Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
