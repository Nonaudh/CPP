#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// const Animal *array[10];
	// for (int i = 0; i < 5; ++i)
	// 	array[i] = new Dog();
	// std::cout << std::endl;
	// for (int i = 5; i < 10; ++i)
	// 	array[i] = new Cat();
	// std::cout << std::endl;
	// for (int i = 0; i < 10; ++i)
	// {
	// 	array[i]->makeSound();
	// 	delete (array[i]);
	// 	std::cout << std::endl;
	// }

	Cat a;
	Cat b(a);
	return 0;
}
