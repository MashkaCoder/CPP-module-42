#include <iostream>

int	main()
{
	std::string	brain;

	brain = "HI THIS IS BRAIN";

	std::string	*ptr = &brain;
	std::string	&ref = brain;

	std::cout << "The memory address of the string variable " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR " << ptr << std::endl;
	std::cout << "The memory address held by stringREF " << &ref << std::endl;
	std::cout << "The value of the string variable " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR " << *ptr << std::endl;
	std::cout << "The value pointed to by stringREF " << ref << std::endl;
}
