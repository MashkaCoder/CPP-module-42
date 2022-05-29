#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	const std::string	getName()const;
	int					getGrade()const;
	void				incrementGrade(int value);
	void				decrementGrade(int value);
	class GradeTooHighException: public std::exception{
		public:
			virtual const char * what() const throw(){ return("The grade too hight");}
	};
	class GradeTooLowException: public std::exception{
		public:
			virtual const char * what() const throw(){ return("The grade too low");}
	};
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &fix);

#endif
