#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie *Zomb = NULL;

    if (N <= 0)
        return (NULL);
    Zomb = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zomb[i].set_name(name);
    return (Zomb);
}