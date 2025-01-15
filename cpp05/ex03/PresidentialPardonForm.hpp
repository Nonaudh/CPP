#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class	PresidentialPardonForm : public AForm
{
	private :
			std::string	_target;
			void		form_action(void) const;
	
	public :
			PresidentialPardonForm(void);
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(PresidentialPardonForm& ref);
			PresidentialPardonForm& operator=(PresidentialPardonForm& ref);
			~PresidentialPardonForm(void);
};

# endif
