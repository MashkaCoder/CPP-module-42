#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name) : name(name), signature(false), to_sign(100), to_execute(100){}

Form::Form(const std::string name, const int sign, const int execute) : name(name), signature(false), to_sign(sign), to_execute(execute){}

Form::Form(const Form &other): name(other.getName()), signature(other.getSignature()), to_sign(other.getSign()), to_execute(other.getExecute())
{
	this->signature = other.signature;
}

Form	& Form::operator=(const Form &other)
{
	this->signature = other.signature;
	return(*this);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if ( bur.getGrade() > to_sign)
		throw GradeTooLowException();
	if (getSignature() == true)
		throw FormIsAlreadySigned();
	signature = true;
}

std::string Form::getName()const
{
	return(name);
}

int	Form::getSign()const
{
	return(to_sign);
}

int	Form::getExecute()const
{
	return(to_execute);
}

bool	Form::getSignature()const
{
	return(signature);
}


std::ostream &operator<<(std::ostream &out, const Form &fix)
{
	out << "Form \"" << fix.getName() << "\" ";
	if (fix.getSignature())
		out << "is signed\n";
	else
		out << "is not signed";
	return (out);
}

Form::~Form(){}
