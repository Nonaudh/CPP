#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const WrongAnimal *atem = new WrongAnimal();
	const WrongAnimal *tac = new WrongCat();

	std::cout << std::endl << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << dog->getType() << std::endl;
 	dog->makeSound();
	std::cout << cat->getType() << std::endl;
 	cat->makeSound();
	std::cout << atem->getType() << std::endl;
 	atem->makeSound();
	std::cout << tac->getType() << std::endl;
 	tac->makeSound();
	std::cout << std::endl;

	delete (meta);
	delete (dog);
	delete (cat);
	delete (atem);
	delete (tac);
	return (0);
}
