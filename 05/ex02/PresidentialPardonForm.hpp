#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form {

	private:
		std::string target;

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm &operator = (const PresidentialPardonForm &other);

		void execute(const Bureaucrat &executor) const;
};

#endif
