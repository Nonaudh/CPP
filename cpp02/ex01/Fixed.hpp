#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int _value;
        static const int _bits = 8;

    public:
        Fixed(void);
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(Fixed &ref);
        ~Fixed(void);

        Fixed   &operator=(Fixed &ref);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

#endif