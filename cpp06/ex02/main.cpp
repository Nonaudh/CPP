#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	Base	*test;

	test = generate();

	identify(test);
	identify(*test);
	
	delete test;
}
