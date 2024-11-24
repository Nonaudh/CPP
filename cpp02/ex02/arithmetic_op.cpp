#include "Fixed.hpp"

float	Fixed::operator+(const Fixed &ref) const
{
	return(this->toFloat() + ref.toFloat());
}

float	Fixed::operator-(const Fixed &ref) const
{
	return(this->toFloat() - ref.toFloat());
}

float	Fixed::operator*(const Fixed &ref) const
{
	return(this->toFloat() * ref.toFloat());
}

float	Fixed::operator/(const Fixed &ref) const
{
	return(this->toFloat() / ref.toFloat());
}
