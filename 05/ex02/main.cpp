#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat	wrong("Wrong", 1666);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	right("Right", 3);

		right.decrementGrade(4);
		std::cout << "Bureaucrat " << right.getName() << " grade: "<< right.getGrade() << std::endl;
		right.incrementGrade(4);
		std::cout << "Bureaucrat " << right.getName() << " grade: "<< right.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat First("First", 100);
	Bureaucrat Second("Second", 50);

	RobotomyRequestForm form1("help");
	PresidentialPardonForm form2("me");
	ShrubberyCreationForm form3("please");

	try
	{
		First.signForm(form1);
		Second.signForm(form1);
		First.signForm(form2);
		Second.signForm(form2);
		First.signForm(form3);
		Second.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		First.executeForm(form1);
		First.executeForm(form2);
		First.executeForm(form3);
		Second.executeForm(form1);
		Second.executeForm(form2);
		Second.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
