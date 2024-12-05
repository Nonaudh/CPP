#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal& ref);
		virtual ~AAnimal(void);
		AAnimal&	operator=(AAnimal& ref);
		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	_type;
};

#endif