#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& ref) : AForm("RobotomyRequestForm", 72, 45)
{
	*this = ref;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& ref)
{
	if (this != &ref)
		this->_target = ref._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

void	RobotomyRequestForm::form_action(void) const
{
	int	nb;

	std::cout << "Dreu... Dreu... Dreuuuuuuuu..." << std::endl;
	std::srand(std::time(NULL));
	nb = std::rand() % 2;
	if (nb)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}
