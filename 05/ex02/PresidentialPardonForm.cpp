#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5), target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other)
{
	target = other.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &other) {

	Form::operator=(other);
	target = other.target;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &bur) const
{
	if (!getSignature())
	{
		throw FormIsNotSigned();
	}
	if (getExecute() > bur.getGrade())
	{
		throw GradeTooLowException();
	}
	std::cout << target << " has been pardoned by Zaphod BeebleBrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
