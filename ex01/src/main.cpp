#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("Claptrap");
	ScavTrap obj;

	claptrap = obj;
	claptrap.attack("Bandit");
	claptrap.takeDamage(9);
	claptrap.beRepaired(10);
	claptrap.beRepaired(3);

	return (0);
} 