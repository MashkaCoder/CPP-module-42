#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

	Intern	intern;
	Form	*forms[4];
	std::string formTypes[4] = {"shrubbery creation", "robotomy request", "dfggrf", "presidential pardon"};

	Bureaucrat Hell("Hell", 1);
	
	int i = 0;
	{
		try
		{
			forms[i] = intern.makeForm(formTypes[i], "TARGET");
			Hell.signForm(*forms[i]);
			Hell.executeForm(*forms[i]);
			delete forms[i];
		}
		catch(const std::exception& e)	{ std::cerr << e.what() << '\n'; }
	}
	i++;
	{
		try
		{
			forms[i] = intern.makeForm(formTypes[i], "TARGET");
			Hell.signForm(*forms[i]);
			Hell.executeForm(*forms[i]);
			delete forms[i];
		}
		catch(const std::exception& e)	{ std::cerr << e.what() << '\n'; }
	}
	i++;
	{
		try
		{
			forms[i] = intern.makeForm(formTypes[i], "TARGET");
			Hell.signForm(*forms[i]);
			Hell.executeForm(*forms[i]);
			delete forms[i];
		}
		catch(const std::exception& e)	{ std::cerr << e.what() << '\n'; }
	}
	i++;
	{
		try
		{
			forms[i] = intern.makeForm(formTypes[i], "TARGET");
			Hell.signForm(*forms[i]);
			Hell.executeForm(*forms[i]);
			delete forms[i];
		}
		catch(const std::exception& e)	{ std::cerr << e.what() << '\n'; }
	}
	return 0;
}
