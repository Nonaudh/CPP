#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal *a = new Dog();
	a->makeSound();
	//const Animal b;  Does not work because it's an abstract class

	delete (a);
	return 0;
}
