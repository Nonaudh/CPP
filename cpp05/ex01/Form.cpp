#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Pedro"), _signed(false), _gradeToSign(150), _gradeToExe(150)
{

}

Form::Form(Form& ref) : _name(ref._name), _signed(ref._signed), _gradeToSign(ref._gradeToSign), _gradeToExe(ref._gradeToExe)
{

}

Form::Form(std::string name, int gradeToSign, int gradeToExe) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
{
	if (gradeToSign < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150)
		throw GradeTooLowException();

	if (gradeToExe < 1)
		throw GradeTooHighException();
	else if (gradeToExe > 150)
		throw GradeTooLowException();	
}

Form& Form::operator=(Form& ref)
{
	if (this != &ref)
	{
		this->_signed = ref._signed;
	}
	return (*this);
}

Form::~Form(void)
{

}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSign(void) const
{
	return (this->_signed);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExe(void) const
{
	return (this->_gradeToExe);
}

void	Form::beSigned(Bureaucrat& ref)
{
	if (ref.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high !");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}

std::ostream&	operator<<(std::ostream& out, Form& ref)
{
	out << "name : " << ref.getName() << std::endl
	<< "signed : " << ref.getSign() << std::endl
	<< "gradeToSign : " << ref.getGradeToSign() << std::endl
	<< "gradeToExe : " << ref.getGradeToExe() << std::endl;

	return (out);
}
