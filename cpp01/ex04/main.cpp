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

int	err(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

int	main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong inputs" << std::endl;
		return (0);
	}
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		in = argv[1];
	std::string		out = in + ".replace";

	infile.open(in.c_str());
	if (!infile.is_open())
		return (err("Can't open infile"));
	outfile.open(out.c_str());
	if (!outfile.is_open())
	{
		infile.close();
		return (err("Can't open outfile"));
	}
	while (std::getline(infile, line, '\0'))
	{
		line = replace_occurence(line, s1, s2);
		outfile << line;
	}
	infile.close();
	outfile.close();
	return (0);
}
