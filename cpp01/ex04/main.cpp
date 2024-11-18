#include <string>
#include <iostream>
#include <fstream>

std::string	replace_occurence(std::string line, std::string &s1, std::string &s2)
{
	std::size_t	start = 0;
	std::size_t	end = 0;
	std::string	new_line;

	while ((end = line.find(s1, start)) != std::string::npos)
	{
		new_line = new_line + line.substr(start, end - start) + s2;
		start = end + s1.length();
	}
	new_line = new_line + line.substr(start, end - start);
	return (new_line);
}

int	main (int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		in = argv[1];
	std::string		out = in + ".replace";

	if (argc == 4)
	{
		infile.open(in.c_str());
		outfile.open(out.c_str());
		while (std::getline(infile, line, '\0'))
		{
			line = replace_occurence(line, s1, s2);
			outfile << line;
		}
		infile.close();
		outfile.close();
	}
	else
		std::cout << "Wrong inputs" << std::endl;
	return (0);
}