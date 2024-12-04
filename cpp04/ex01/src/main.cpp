#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();

	// std::cout << j->getType() << " " << std::endl;
	//std::cout << meta->getType() << " " << std::endl;
	// j->makeSound();
	//meta->makeSound();
	//delete (meta);
	delete (j);
	return 0;
}
