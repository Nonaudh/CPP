#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "fstream"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{


}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& ref) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = ref;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& ref)
{
	if (this != &ref)
		this->_target = ref._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void	ShrubberyCreationForm::form_action(void) const
{
	std::ofstream	outfile;
	std::string 	filename = this->_target + "_shrubbery";

	outfile.open(filename.c_str());
	if (outfile.is_open())
	{
		outfile << "      ccee88oo " << std::endl;
		outfile << "   C8O8O8Q8PoOb o8oo " << std::endl;
		outfile << "  dOB69QO8PdUOpugoO9bD " << std::endl;
		outfile << " CgggbU8OU qOp qOdoUOdcb " << std::endl;
		outfile << "     6OuU  /p u gcoUodpP " << std::endl;
		outfile << "       \\//  /douUP " << std::endl;
		outfile << "         \\//// " << std::endl;
		outfile << "          ||||/ " << std::endl;
		outfile << "          ||||/ " << std::endl;
		outfile << "          ||||| " << std::endl;
		outfile << "    .....//||||\\... " << std::endl;
		outfile.close();
	}
	else
		throw CantOpenFile();
}

const char *ShrubberyCreationForm::CantOpenFile::what() const throw()
{
	return ("Can't open file !");
}
