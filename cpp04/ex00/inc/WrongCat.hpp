#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat& ref);
		~WrongCat(void);
		WrongCat&	operator=(WrongCat& ref);
		void	makeSound(void) const;
};

#endif
