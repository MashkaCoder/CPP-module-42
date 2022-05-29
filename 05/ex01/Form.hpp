#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				signature;
	const int			to_sign;
	const int			to_execute;
public:
	Form();
	Form(const std::string name);
	Form(const std::string name, const int sign, const int execute);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	std::string	getName()const;
	bool		getSignature()const;
	int			getSign()const;
	int			getExecute()const;


	void	beSigned(const Bureaucrat &bur);

	class GradeTooHeighException : public std::exception {
		public:
			virtual const char* what() const throw() { return ("The grade too hight"); }
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return ("The grade too low"); }
	};

	class FormIsAlreadySigned : public std::exception {
		public:
			virtual const char* what() const throw() { return ("The form is already signed"); }
	};
};

std::ostream &operator << (std::ostream &out, const Form &fix);

#endif
