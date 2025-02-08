#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("class1");
	ScavTrap obj("class2");

	// claptrap = obj;
	obj.attack("Bandit");
	obj.guardGate();
	claptrap.attack("Bandit");
	obj.takeDamage(9);
	obj.beRepaired(5);
	obj.beRepaired(3);

	return (0);
} 