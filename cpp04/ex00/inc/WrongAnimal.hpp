#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal& ref);
		virtual ~WrongAnimal(void);
		WrongAnimal&	operator=(WrongAnimal& ref);
		std::string	getType(void) const;
		void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif