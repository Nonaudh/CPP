#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class   ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap &ref);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap& operator=(ClapTrap &ref);

		std::size_t	get_hit_point(void) const;
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	_name;
		std::size_t	_hit_point;
		std::size_t	_energy_point;
		std::size_t	_attack_damage;
};

# endif