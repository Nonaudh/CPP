#include <iostream>
#include <cctype>

int	main (int argc, char **argv)
{
	std::string str;
	int	i;

	i = 1;
	if (argc != 1)
	{
		while (i < argc)
		{
			str = argv[i];
			for(std::string::iterator it=str.begin(); it != str.end(); it++)
				std::cout << (char)toupper(*it);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}