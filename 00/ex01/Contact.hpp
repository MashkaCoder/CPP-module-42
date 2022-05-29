#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string contact[5];
		std::string fields[5];
	public:
		Contact();
		~Contact();

		int		set_info(void);
		void	print_contact(void);
		void	print_all_contact(int index);
};

#endif
