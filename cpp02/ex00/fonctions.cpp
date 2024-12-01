#include "Fixed.hpp"

int Fixed::getRawBits(void) const 
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw) 
{
    this->_value = raw;
}