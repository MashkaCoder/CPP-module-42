#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 37), target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
	target = other.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator =
	(const ShrubberyCreationForm &other) {

	Form::operator=(other);
	target = other.target;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &bur) const {
	if (!getSignature()) {
		throw FormIsNotSigned();
	}
	if (getExecute() > bur.getGrade()) {
		throw GradeTooLowException();
	}

	std::ofstream out (target + "_shrubbery");

	if (out.is_open()) {
		out << "       _-_" << std::endl;
		out << "    /~~   ~~\\" << std::endl;
		out << " /~~         ~~\\" << std::endl;
		out << "{               }" << std::endl;
		out << " \\  _-     -_  /" << std::endl;
		out << "   ~  \\\\ //  ~" << std::endl;
		out << "_- -   | | _- _" << std::endl;
		out << "  _ -  | |   -_" << std::endl;
		out << "      // \\\\" << std::endl;
	}
	out.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
