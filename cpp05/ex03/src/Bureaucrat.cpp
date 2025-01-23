#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Joe") , _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& ref)
{
	*this = ref;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat& ref)
{
 	if (this != &ref)
		this->_grade = ref._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{

}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::decrement(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::increment(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::signAForm(AForm& ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout << this->_name << " signed " << ref.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't signed " << ref.getName() << " because " << e.what() <<  std::endl;
	}	
}

void	Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " coudn't executed " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& ref)
{
    out << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
    return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}
