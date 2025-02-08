#include "../include/ScavTrap.hpp"
ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << GREY << "ScavTrap default constructor" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << GREY << "ScavTrap name constructor" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << GREY <<  "ScavTrap copy constructor" << RESET << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREY << "ScavTrap destructor" << RESET << std::endl;
}
// ScavTrapvoid guardGate();