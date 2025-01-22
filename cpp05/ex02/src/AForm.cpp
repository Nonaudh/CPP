#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("Pedro"), _signed(false), _gradeToSign(150), _gradeToExe(150)
{

}

AForm::AForm(AForm& ref) : _name(ref._name), _signed(ref._signed), _gradeToSign(ref._gradeToSign), _gradeToExe(ref._gradeToExe)
{

}

AForm::AForm(std::string name, int gradeToSign, int gradeToExe) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
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

AForm& AForm::operator=(AForm& ref)
{
	if (this != &ref)
	{
		this->_signed = ref._signed;
	}
	return (*this);
}

AForm::~AForm(void)
{

}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSign(void) const
{
	return (this->_signed);
}

int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExe(void) const
{
	return (this->_gradeToExe);
}

void	AForm::beSigned(Bureaucrat& ref)
{
	if (ref.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const& executor) const
{
	if (!this->_signed)
		throw FormNotSigned();
	else if (executor.getGrade() > this->_gradeToExe)
		throw GradeTooLowException();
	else
		form_action();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high !");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed !");
}

std::ostream&	operator<<(std::ostream& out, AForm& ref)
{
	out << "name : " << ref.getName() << std::endl
	<< "signed : " << ref.getSign() << std::endl
	<< "gradeToSign : " << ref.getGradeToSign() << std::endl
	<< "gradeToExe : " << ref.getGradeToExe() << std::endl;

	return (out);
}
