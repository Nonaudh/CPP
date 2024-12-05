#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const AAnimal *a = new Dog();
	a->makeSound();
	//const AAnimal b;  Does not work because it's an abstract class

	delete (a);
	return 0;
}
