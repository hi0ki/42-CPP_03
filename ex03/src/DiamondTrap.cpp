#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name") 
{
	std::cout << GREY << "DiamondTrap default constructor called" << RESET << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap("DiamondTrap_clap_name")
{
	this->name = name;
	std::cout << GREY << "DiamondTrap name constructor called" << RESET <<std::endl;
}

// DiamondTrap(const DiamondTrap &obj);
DiamondTrap::~DiamondTrap()
{
	std::cout << GREY << "DiamondTrap " << this->name << " destructor called" << RESET << std::endl;
}
// DiamondTrap	&operator=(const DiamondTrap &obj);