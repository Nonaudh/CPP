#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <cstdlib>
# include <ctime>

Base	*generate(void)
{
	int	nb;

	std::srand(std::time(NULL));
	nb = std::rand() % 3;

	switch (nb)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is a type A" << std::endl;
	
	if (dynamic_cast<B*>(p))
		std::cout << "This is a type B" << std::endl;

	if (dynamic_cast<C*>(p))
		std::cout << "This is a type C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "This is a type A" << std::endl;
	}
	catch(const std::exception& e)
	{}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "This is a type B" << std::endl;
	}
	catch(const std::exception& e)
	{}
	
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "This is a type C" << std::endl;
	}
	catch(const std::exception& e)
	{}
}
