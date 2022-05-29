#include "Bureaucrat.hpp"

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
		right.incrementGrade(14);
		std::cout << "Bureaucrat " << right.getName() << " grade: "<< right.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
