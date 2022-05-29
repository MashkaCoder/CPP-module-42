#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cmath>
#include <cctype>

class Convert
{
	private:
		double		value;

		void		printChar();
		void		printInt();
		void		printFloat();
		void		printDouble();

		void		parseStr(char *str);

		class EmptyInput : public std::exception {
			public:
				virtual const char* what() const throw() { return ("empty input"); }
		};

		class NotNumeric : public std::exception {
			public:
				virtual const char* what() const throw() { return ("input value is not numeric"); }
		};

	public:
		Convert();
		~Convert();
		Convert(const Convert &other);
		Convert &operator = (const Convert &other);

		bool	convertStr(char *str);
		void	printValue();


};

#endif
