#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[j])
		{
			while (argv[j][i])
			{
				std::cout << (char)toupper(argv[j][i]);
				i++;
			}
			i = 0;
			j++;
		}
	std::cout << '\0' << std::endl;
	}
}
