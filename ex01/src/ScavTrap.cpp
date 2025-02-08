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

void	ScavTrap::attack(std::string const &target)
{
	if (!this->hitPoints)
	{
		std::cout << RED << "ScavTrap " << this->name << " is dead and cannot attack" << RESET << std::endl;
		return ;
	}
	else if (!this->energyPoints)
	{
		std::cout << RED << "ScavTrap " << this->name << " has no energy points and cannot attack" << RESET << std::endl;
		return ;
	}
	else if (!this->attackDamage)
	{
		std::cout << RED << "ScavTrap " << this->name << " has no attack damage and cannot attack" << RESET << std::endl;
		return ;
	}
	std::cout << GREEN << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << RESET << std::endl;
	this->energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << GREEN << "ScavTrap " << this->name << " is now in Gate keeper mode." << RESET << std::endl;
}