#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(WrongDog& ref);
		~WrongDog(void);
		WrongDog&	operator=(WrongDog& ref);
		void	makeSound(void) const;
};

#endif