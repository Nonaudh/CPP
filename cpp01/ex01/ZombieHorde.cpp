#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
    Zombie *Zomb = NULL;

    Zomb = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zomb[i].set_name(name);
    return (Zomb);
}