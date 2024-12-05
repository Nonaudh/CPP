#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat& ref);
		~Cat(void);
		Cat&	operator=(Cat& ref);
		void	makeSound(void) const;
};

#endif
