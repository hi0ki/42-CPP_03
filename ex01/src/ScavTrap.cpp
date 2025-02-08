#include "../include/ScavTrap.hpp"
ScavTrap::ScavTrap()
{
	std::cout << GREY << "ScavTrap default constructor" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREY << "ScavTrap name constructor" << RESET << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << GREY <<  "ScavTrap copy constructor" << RESET << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREY << "ScavTrap destructor" << RESET << std::endl;
}
// ScavTrapvoid guardGate();