#include "Contact.hpp"

Contact::Contact()
{
	fields[0] = "first name";
	fields[1] = "last name";
	fields[2] = "nickname";
	fields[3] = "phone number";
	fields[4] = "darkest secret";
}

Contact::~Contact(){}

int	Contact::set_info(void)
{
	int			i;
	std::string	data;

	i = 0;
	while (i < 5)
	{
		std::cout << "Enter a " << fields[i] << " ";
		std::getline(std::cin, contact[i]);
		if(contact[i] == "")
		{
			std::cout << "A saved contact can't have empty fields" << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}

void	Contact::print_all_contact(int index)
{
	int	i;

	i = 0;
	std::cout<<"|";
	std::cout << std::setw(10) << index + 1 ;
	while (i < 3)
	{
		std::cout << "|";
		if (contact[i].length() >= 10)
			std::cout << contact[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << contact[i];
		i++;
	}
	std::cout << "|\n";

}

void	Contact::print_contact(void)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		std::cout << fields[i] << " ";
		std::cout << contact[i] << std::endl;
		i++;
	}
}
