#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &ref) 
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = ref._value;
}

Fixed::~Fixed(void) 
{
    std::cout << "Default destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed &ref)
{
    this->_value = ref._value;
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw) 
{
    this->_value = raw;
}
