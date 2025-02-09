#ifndef DIAMONDTRAP_HPP
	#define DIAMONDTRAP_HPP

	#include "ScavTrap.hpp"
	#include "FragTrap.hpp"

	class DiamondTrap : FragTrap : ScavTrap
	{
		private:
			std::string	_name;
		public:
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap &obj);
			~DiamondTrap();
			DiamondTrap	&operator=(const DiamondTrap &obj);
	}
#endif