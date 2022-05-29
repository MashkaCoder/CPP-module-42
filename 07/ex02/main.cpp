#include "Array.hpp"

int main() {

	Array<int>			intArray;
	Array<std::string>	stringArray(3);
	Array<std::string>	otherStringArray;

	stringArray[0] = "test";
	stringArray[1] = "string";
	stringArray[2] = "arr";

	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;

	try {

		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}

	try {

		std::cout << otherStringArray[-3] << std::endl;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}

	try {

		std::cout << "stringArray:" << std::endl << std::endl;
		for (int i = 0; i < stringArray.size(); i++)
			std::cout << stringArray[i] << std::endl;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}

	return 0;
}
