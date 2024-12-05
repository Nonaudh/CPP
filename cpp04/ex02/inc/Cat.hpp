#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat& ref);
		~Cat(void);
		Cat&	operator=(Cat& ref);
		void	makeSound(void) const;

	private:
		Brain *_brain;
};

#endif