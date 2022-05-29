#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	this->grade = other.grade;
}

Bureaucrat	& Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade = other.grade;
	return(*this);
}

void	Bureaucrat::incrementGrade(int value)
{
	if (grade - value < 1)
		throw GradeTooHighException();
	grade -= value;
}

void	Bureaucrat::decrementGrade(int value)
{
	if (grade + value > 150)
		throw GradeTooLowException();
	grade += value;
}

const std::string Bureaucrat::getName()const
{
	return(name);
}

int	Bureaucrat::getGrade()const
{
	return(grade);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &fix)
{
	out << fix.getName() << ", bureaucrat grade " << fix.getGrade();
	return(out);
}

Bureaucrat::~Bureaucrat(){}
