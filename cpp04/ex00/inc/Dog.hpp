#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog& ref);
		~Dog(void);
		Dog&	operator=(Dog& ref);
		void	makeSound(void) const;
};

#endif