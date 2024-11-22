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
