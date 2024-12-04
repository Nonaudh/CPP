#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain Constructor called" << std::endl;
}

Brain::Brain(Brain& ref)
{
	std::cout << "Copy Brain Constructor called" << std::endl;
	*this = ref;
}

Brain::~Brain(void)
{
	std::cout << "Default Brain Destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain &ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = ref.ideas[i];
	}
	return (*this);
}
