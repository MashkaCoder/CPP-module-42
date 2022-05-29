#include "Zombie.hpp"

int	main()
{
	Zombie *noize;

	noize = zombieHorde(5, "priv");
	for (int i = 0; i < 5; i++)
		noize[i].announce();
	delete [] noize;
	return(0);
}
