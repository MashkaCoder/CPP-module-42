#include <iostream>
#include <fstream>

void	replace(std::string *buf, std::string s1, std::string s2)
{
	size_t		pos;
	int			n_s;

	pos = 0;
	while(pos < buf->length())
	{
		n_s = buf->find(s1, pos);
		if (n_s == -1)
			return ;
		buf->erase(n_s, s1.length());
		buf->insert(n_s, s2);
		pos = n_s + s2.length();
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect number of arguments.\n" << "Please enter a filename and two strings" << std::endl;
		return (1);
	}

	std::string		file_or(argv[1]);
	std::ifstream	infile (file_or);

	if (!infile.is_open())
	{
		std::cout << "Error. File cannot be oppened" << std::endl;
		return (1);
	}
	std::ofstream outfile (file_or + ".replace");
	if (!outfile.is_open())
	{
		std::cout << "Error. File cannot be created" << std::endl;
		return (1);
	}
	std::string	buf;
	while (!infile.eof())
	{
		std::getline(infile, buf);
		replace(&buf, argv[2], argv[3]);
		outfile << buf << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
