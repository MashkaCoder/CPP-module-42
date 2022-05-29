#include "Bureaucrat.hpp"
#include "Form.hpp"

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

		Form form1("first", 3, 3);
		Form form2("sec", 40, 3);

		right.signForm(form1);
		right.signForm(form1);
		right.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
