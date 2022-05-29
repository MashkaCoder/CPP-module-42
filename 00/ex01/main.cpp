#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	mobila;
	std::string test;
	while (true)
	{
		std::cout << "Enter a string: \n";
		std::getline(std::cin, test);
		if (test == "SEARCH")
			mobila.search_contact();
		else if (test == "ADD")
			mobila.add_contact();
			// std::cout << "soon..))";
		else if (test == "EXIT")
			break;
		else
		{
			std::cout << "\033[1;31mWrong command\n\033[0m" << "\033[32mAvalibale command: \033[0m\n" << "-\033[36mADD\033[0m for add a new contact \n";
			std::cout << "-\033[36mSEARCH\033[0m for search a contact\n" << "-\033[36mEXIT\033[0m for exit to progarmm\n\n" ;
		}
	}
}
