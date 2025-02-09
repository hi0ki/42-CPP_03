#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << GREY << "FragTrap default constructor called" << RESET << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREY << "FragTrap name constructor called" << RESET << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << GREY << "FragTrap copy constructor called" << RESET << std::endl;
	*this = obj;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	std::cout << GREY << "FragTrap assignation operator" << RESET << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}
FragTrap::~FragTrap()
{
	std::cout << GREY <<  "FragTrap " << this->name << " destructor called" << RESET << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (!this->hitPoints)
	{
		std::cout << RED << "FragTrap " << this->name << " is dead and cannot attack" << RESET << std::endl;
		return ;
	}
	else if (!this->energyPoints)
	{
		std::cout << RED << "FragTrap " << this->name << " has no energy points and cannot attack" << RESET << std::endl;
		return ;
	}
	else if (!this->attackDamage)
	{
		std::cout << RED << "FragTrap " << this->name << " has no attack damage and cannot attack" << RESET << std::endl;
		return ;
	}
	std::cout << GREEN << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << RESET << std::endl;
	this->energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << GREEN << "FragTrap " << this->name << " requests a high five" << RESET << std::endl;
}