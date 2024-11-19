#include "Fixed.hpp"

int main(void)
{
    {
        Fixed a;
        Fixed b;

        a.setRawBits(50);
        b.setRawBits(60);
        Fixed c(a);
        a = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
    }
    std::cout << "-------------------------------" << std::endl;
    {
        Fixed a;
        a.setRawBits(42);
        Fixed b( a );
        Fixed c;
        c = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
    }

    return (0);
}