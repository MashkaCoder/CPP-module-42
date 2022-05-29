#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				signature;
		const int			to_sign;
		const int			to_execute;

	public:
		Form(std::string name);
		Form(std::string name, const int sign, const int execute);
		Form(const Form &other);
		Form &operator=(const Form &other);
		virtual ~Form();

		std::string	getName()const;
		bool		getSignature()const;
		int			getSign()const;
		int			getExecute()const;


		void		beSigned(const Bureaucrat &bur);
		virtual void execute(const Bureaucrat &bur) const = 0; ///

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

		class FormIsNotSigned : public std::exception {
				public:
					virtual const char* what() const throw() { return ("The form is not signed"); }
			};
};

std::ostream &operator << (std::ostream &out, const Form &fix);

#endif
