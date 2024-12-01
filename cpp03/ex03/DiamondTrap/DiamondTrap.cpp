#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("No One_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "No One";
	this->_hit_point = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap &ref) : ClapTrap(ref), ScavTrap(ref), FragTrap(ref)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;

	this->_name = ref._name;
	this->_hit_point= ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hit_point = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &ref)
{
	this->_name = ref._name;
	this->_hit_point= ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}
