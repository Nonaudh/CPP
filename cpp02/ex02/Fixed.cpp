#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = nb << this->_bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nb * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &ref) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = ref._value;
}

Fixed::~Fixed(void) 
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = ref._value;
	return (*this);
}
