#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR. Please enter a two params" << std::endl;
		return (1);
	}
	Harl	test;

	test.complain(argv[1]);
	return (0);
}
