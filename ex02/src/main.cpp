#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("class1");
	ScavTrap obj("class2");

	obj.guardGate();
	obj.attack("Bandit");
	obj.takeDamage(10);
	claptrap.attack("Bandit");
	claptrap.takeDamage(10);
	claptrap.beRepaired(10);

	return (0);
} 