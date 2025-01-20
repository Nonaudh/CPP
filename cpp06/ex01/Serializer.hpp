#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"
# include <stdint.h>
# include <iostream>

class	Serializer
{
	private :
		Serializer(void);
		Serializer(Serializer& ref);
		Serializer& operator=(Serializer& ref);
		~Serializer(void);

	public :
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);
};

#endif