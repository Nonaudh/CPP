#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called by " << this->_name << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called by " << this->_name << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called by " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& ref) : ClapTrap(ref)
{
	std::cout << "ScavTrap Copy constructor called by " << this->_name << std::endl;

	this->_name = ref._name;
	this->_hit_point = ref._hit_point ;
	this->_energy_point = ref._energy_point;
	this->_attack_damage =ref._attack_damage;
}

ScavTrap&	ScavTrap::operator=(ScavTrap& ref)
{
	this->_name = ref._name;
	this->_hit_point = ref._hit_point ;
	this->_energy_point = ref._energy_point;
	this->_attack_damage =ref._attack_damage;
	return (*this);
}