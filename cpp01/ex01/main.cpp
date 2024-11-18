#include "Zombie.hpp"

int	main (void)
{
	Zombie	*Zomb = NULL;
	int		number_of_Zomb = 5;

	Zomb = Zomb->zombieHorde(number_of_Zomb, "Gerard");
	for (int i = 0; i < number_of_Zomb; i++)
		Zomb->announce();
	delete[](Zomb);
	return (0);
}