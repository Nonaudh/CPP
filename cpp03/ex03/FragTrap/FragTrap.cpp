#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& ref) : ClapTrap(ref)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;

	this->_name = ref._name;
	this->_hit_point = ref._hit_point ;
	this->_energy_point = ref._energy_point;
	this->_attack_damage =ref._attack_damage;
}

FragTrap&	FragTrap::operator=(FragTrap& ref)
{
	this->_name = ref._name;
	this->_hit_point = ref._hit_point ;
	this->_energy_point = ref._energy_point;
	this->_attack_damage =ref._attack_damage;
	return (*this);
}