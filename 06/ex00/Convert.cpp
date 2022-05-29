#include "Convert.hpp"

Convert::Convert() : value(0.0){}

Convert::Convert(const Convert &other) {

	this->value = other.value;
}

Convert &Convert::operator = (const Convert &other) {
	this->value = other.value;
	return (*this);
}

void	Convert::printChar()
{
	std::cout << "char: ";

	if (value < 0 || value > 127 || std::isnan(value))
		std::cout << "impossible";
	else if (value < 32 || value > 126)
		std::cout << "not printable";
	else
		std::cout << "\'" << static_cast<char>(value) << "\'";

	std::cout << std::endl;
}

void	Convert::printInt() {

	std::cout << "integer: ";
	if (value > std::numeric_limits<int>::max()
		|| value < std::numeric_limits<int>::min()
		|| std::isnan(value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	Convert::printFloat() {

	std::cout << "float: ";
	std::cout << static_cast<float>(value);
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Convert::printDouble() {

	std::cout << "double: ";
	std::cout << value;
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	Convert::parseStr(char *str)
{
	if (!str || !*str)
		throw EmptyInput();

	if (!str[1] && !isdigit(str[0]))
		return;

	int i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;

	if (!isdigit(str[i]))
		throw NotNumeric();

	int dotCount = 0;
	int fCount = 0;
	for (; str[i]; i++) {

		if (str[i] == '.')
			dotCount++;
		if (str[i] == 'f')
			fCount++;
		if (dotCount > 1 || fCount > 1 || (!isdigit(str[i]) && str[i] != 'f' && str[i] != '.'))
			throw NotNumeric();
	}
}

void	Convert::printValue()
{
	printChar();
	printInt();
	printDouble();
	printFloat();
}

bool Convert::convertStr(char *str)
{
	parseStr(str);
	if ((!str[1] && !isdigit(str[0])))
	{
		value = static_cast<int>(*str);
		return (true);
	}
	value = atof(str);
	return (true);
}

Convert::~Convert(){}
