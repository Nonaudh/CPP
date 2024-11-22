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

		Fixed&	operator=(const Fixed& ref);
		bool	operator>(const Fixed &ref);
		bool	operator<(const Fixed &ref);
		bool	operator>=(const Fixed &ref);
		bool	operator<=(const Fixed &ref);
		bool	operator==(const Fixed &ref);
		bool	operator!=(const Fixed &ref);
		int		operator+(const Fixed &ref);
		int		operator-(const Fixed &ref);
		int		operator*(const Fixed &ref);
		int		operator/(const Fixed &ref);
		int     getRawBits(void) const;
		void    setRawBits(int const raw);
		float   toFloat(void) const;
		int     toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif