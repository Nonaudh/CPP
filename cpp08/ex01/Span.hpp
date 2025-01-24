#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class	Span
{
	private :
		unsigned int 		_N;
		std::vector<int>	_v;

	public :
		Span(void);
		Span(unsigned int N);
		Span(const Span& ref);
		Span&	operator=(const Span& ref);
		~Span(void);

		void	addNumber(int nb);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);

	class	SpanIsFull : public std::exception
	{
		const char	*what(void) const throw();
	};

	class	NotEnoughNumber : public std::exception
	{
		const char	*what(void) const throw();
	};
};

#endif
