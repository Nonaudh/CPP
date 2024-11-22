#include "Fixed.hpp"

int	Fixed::operator+(const Fixed &ref)
{
	return(this->getRawBits() + ref.getRawBits());
}

int		Fixed::operator-(const Fixed &ref)
{
	return(this->getRawBits() - ref.getRawBits());
}

int		Fixed::operator*(const Fixed &ref)
{
	return(this->getRawBits() * ref.getRawBits());
}

int		Fixed::operator/(const Fixed &ref)
{
	return(this->getRawBits() / ref.getRawBits());
}
