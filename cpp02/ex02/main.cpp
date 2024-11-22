#include "Fixed.hpp"

int main(void)
{
	Fixed const b(42.42f);
	Fixed const d(2);
	Fixed const c( Fixed(42.42f) + Fixed(2));
	Fixed a(42.42f * 2);
	std::cout << Fixed(42.42f) << std::endl;
	std::cout << Fixed(2) << std::endl;
	std::cout << c << std::endl;
	std::cout << a << std::endl;
	return (0);
}