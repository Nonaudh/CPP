#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
	private:
		int _value;
		static const int _bits = 8;

	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& ref);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed&	operator=(const Fixed& ref);
		bool	operator>(const Fixed &ref) const;
		bool	operator<(const Fixed &ref) const;
		bool	operator>=(const Fixed &ref) const;
		bool	operator<=(const Fixed &ref) const;
		bool	operator==(const Fixed &ref) const;
		bool	operator!=(const Fixed &ref) const;
		float	operator+(const Fixed &ref) const;
		float	operator-(const Fixed &ref) const;
		float	operator*(const Fixed &ref) const;
		float	operator/(const Fixed &ref) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&	min(Fixed& ref1, Fixed& ref2);
		static const Fixed&	min(const Fixed& ref1, const Fixed& ref2);
		static Fixed&	max(Fixed& ref1, Fixed& ref2);
		static const Fixed&	max(const Fixed& ref1, const Fixed& ref2);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif