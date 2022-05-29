#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		int		index;
		int		all_concacts;
		Contact	contacts[8];
	public:
		PhoneBook();
		~PhoneBook();

		void	search_contact();
		void	add_contact();
};

// PhoneBook::PhoneBook(/* args */)
// {
// }

// PhoneBook::~PhoneBook()
// {
// }


#endif
