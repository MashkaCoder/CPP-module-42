#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class Form;

class Intern {

	private:
	 	Form* makePresidentialPardonForm(std::string target);
		Form* makeShrubberyCreationForm(std::string target);
		Form* makeRobotomyRequestForm(std::string target);

	public:

		Intern();
		Intern (const Intern &other);
		~Intern();
		Intern &operator = (const Intern &other);

		Form *makeForm(std::string formType, std::string target);

		class ErrorMakingForm : public std::exception {
			public:
				virtual const char* what() const throw() { return ("Intern can't make an unknown form"); }
		};
};

#endif
