#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}
DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

// DiamondTrap(const DiamondTrap &obj);
// ~DiamondTrap();
// DiamondTrap	&operator=(const DiamondTrap &obj);