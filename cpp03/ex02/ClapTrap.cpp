#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("No One"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called by " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &ref) : _name(ref._name)
{
	std::cout << "ClapTrap Copy constructor called by " << this->_name << std::endl;

	this->_hit_point= ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point (10), _attack_damage(0)
{
	std::cout << "ClapTrap Name constructor called by " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called by " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap &ref)
{
	this->_name = ref._name;
	this->_hit_point= ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}
