#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <stdlib.h>
# include <time.h>
# include <iostream>


class RobotomyRequestForm : public Form {

	private:
		std::string target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm &operator = (const RobotomyRequestForm &other);

		void execute(const Bureaucrat &executor) const;
};

#endif
