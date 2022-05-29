#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
	target = other.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &other) {

	Form::operator=(other);
	target = other.target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &bur) const
{
	if (!getSignature())
	{
		throw FormIsNotSigned();
	}
	if (getExecute() > bur.getGrade())
	{
		throw GradeTooLowException();
	}
	srand(time(NULL));
	std::cout << getName() << ": * make some noize *" << std::endl;
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << target << ": robotomy failed"<< std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm() {}
