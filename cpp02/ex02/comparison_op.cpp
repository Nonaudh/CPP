#include "Fixed.hpp"

bool	Fixed::operator>(const Fixed &ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator<(const Fixed &ref) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool	Fixed::operator>=(const Fixed &ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<=(const Fixed &ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==(const Fixed &ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=(const Fixed &ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}
