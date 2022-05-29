#include "Zombie.hpp"

int	main()
{
	Zombie	first("Rail");
	Zombie *sec;

	first.announce();
	std::cout << "Static" << std::endl;
	for (int i = 0; i < 3; i++)
		randomChump("Raiiilll");
	std::cout << "\n" << "Start Dinamic" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		sec = newZombie("Dinamic");
		sec->announce();
		delete sec;
	}
}
