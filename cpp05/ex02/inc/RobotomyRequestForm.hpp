#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class	RobotomyRequestForm : public AForm
{
	private :
			std::string	_target;
			void		form_action(void) const;
	
	public :
			RobotomyRequestForm(void);
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(RobotomyRequestForm& ref);
			RobotomyRequestForm& operator=(RobotomyRequestForm& ref);
			~RobotomyRequestForm(void);
};

# endif
