#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./cast [number]" << std::endl;
		return (1);
	}
	Convert conv;
	try {

		conv.convertStr(argv[1]);
		conv.printValue();
	}
	catch(const std::exception& e) {

		std::cerr << e.what() << '\n';
	}
	return 0;
}
