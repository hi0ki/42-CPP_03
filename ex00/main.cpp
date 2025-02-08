#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Claptrap");

	claptrap.attack("Bandit");
	claptrap.takeDamage(9);
	claptrap.beRepaired(10);
	claptrap.beRepaired(3);
	return (0);
}