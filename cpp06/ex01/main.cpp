#include "Serializer.hpp"

int	main(void)
{
	Data *test;
	uintptr_t raw;

	test = new Data;
	test->name = "ahuge";
	test->number = 42;

	std::cout << test << std::endl;

	raw = Serializer::serialize(test);
	test = Serializer::deserialize(raw);

	std::cout << test << std::endl;
	std::cout << test->name << std::endl;
	std::cout << test->number << std::endl;

	delete test;
	return (0);
}