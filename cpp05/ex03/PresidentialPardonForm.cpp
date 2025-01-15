#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& ref) : AForm("PresidentialPardonForm", 25, 5)
{
	*this = ref;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& ref)
{
	if (this != &ref)
		this->_target = ref._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void	PresidentialPardonForm::form_action(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
