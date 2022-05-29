#include "PhoneBook.hpp"

using std::cout;

PhoneBook::PhoneBook() : index(0), all_concacts(0){}

PhoneBook::~PhoneBook(){}

void	PhoneBook::search_contact(void)
{
	int			i;
	int			num;
	std::string	number_str;

	i = 0;
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|     Index|First name| Last name|  Nickname|\n";
	std::cout << "|-------------------------------------------|\n";
	while (i < index || (i < all_concacts && i < 8))
	{
		contacts[i].print_all_contact(i);
		std::cout << "|-------------------------------------------|\n";
		i++;
	}
	if (index > 0)
	{
		std::cout << "enter an index of contact: ";
		std::getline(std::cin, number_str);
		try
		{
			num = stoi(number_str);
		}
		catch(const std::exception& e)
		{
			std::cout << "Invalid input" << std::endl;
			num = -1;
		}
		if (num < 1  || num > index)
			std::cout << "Please enter a valid index of contact" << std::endl;
		else
			contacts[num - 1].print_contact();
	}
}

void	PhoneBook::add_contact(void)
{
	if (index > 7)
	{
		std::cout << "Your phone book is full. The oldest contact will be rewrite" << std::endl;
		index = 0;
	}
	if(!contacts[index].set_info() && index < 8)
		index++, all_concacts++;
}
