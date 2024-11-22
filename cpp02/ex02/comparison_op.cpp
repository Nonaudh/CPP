#include "Fixed.hpp"

bool	Fixed::operator>(const Fixed &ref)
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator<(const Fixed &ref)
{
	return (this->getRawBits() < ref.getRawBits());
}

bool	Fixed::operator>=(const Fixed &ref)
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<=(const Fixed &ref)
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==(const Fixed &ref)
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=(const Fixed &ref)
{
	return (this->getRawBits() != ref.getRawBits());
}
