#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator = (const Intern &other) {

	(void)other;
	return *this;
};

Form* Intern::makePresidentialPardonForm(std::string target ){

	return new PresidentialPardonForm(target);
}

Form* Intern::makeShrubberyCreationForm(std::string target){

	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyRequestForm(std::string target) {

	return new RobotomyRequestForm(target);
}

Form *Intern::makeForm(std::string formType, std::string target) {

	Form *(Intern::*func[4])(std::string target) = {
			&Intern::makePresidentialPardonForm,
			&Intern::makeShrubberyCreationForm,
			&Intern::makeRobotomyRequestForm};
	std::string types[3] =  {
			"presidential pardon",
			"shrubbery creation",
			"robotomy request"};
	for (int i = 0; i < 4; i++)
	{
		if (formType == types[i]){
			std::cout << "Intern creates " << formType << " form." << std::endl;
		return (this->*func[i])(target);
		}
	}
	throw ErrorMakingForm();
	return (NULL);
}

Intern::~Intern() {}
