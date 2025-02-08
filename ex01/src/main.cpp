#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("Claptrap");
	ScavTrap obj("mehdi");

	// claptrap = obj;
	obj.attack("Bandit");
	obj.takeDamage(9);
	obj.beRepaired(5);
	obj.beRepaired(3);

	return (0);
} 