#include "Fixed.hpp"

Fixed& Fixed::min(Fixed& ref1, Fixed& ref2)
{
	if (ref1 < ref2)
		return (ref1);
	return (ref2);
}

const Fixed&	Fixed::min(const Fixed& ref1, const Fixed& ref2)
{
	if (ref1 < ref2)
		return (ref1);
	return (ref2);
}

Fixed& Fixed::max(Fixed& ref1, Fixed& ref2)
{
	if (ref1 > ref2)
		return (ref1);
	return (ref2);
}

const Fixed&	Fixed::max(const Fixed& ref1, const Fixed& ref2)
{
	if (ref1 > ref2)
		return (ref1);
	return (ref2);
}
