#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain& ref);
		~Brain(void);
		Brain&	operator=(Brain &ref);

	private:
		std::string	ideas[100];
};

#endif
