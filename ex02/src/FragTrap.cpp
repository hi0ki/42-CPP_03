#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor with name" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = obj;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap assignation operator" << std::endl;
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
	std::cout << "FragTrap destructor" << std::endl;
}