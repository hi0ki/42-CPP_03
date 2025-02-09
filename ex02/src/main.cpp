#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main()
{
    // Create instances of each class
    ClapTrap claptrap("ClapTrap");
    ScavTrap scavtrap("ScavTrap");
    FragTrap fragtrap("FragTrap");

    // Test ClapTrap functionalities
    claptrap.attack("target1");
    claptrap.takeDamage(10);
    claptrap.beRepaired(3);

    std::cout << "----------------------------------------------------" << std::endl;
    // Test ScavTrap functionalities
    scavtrap.attack("target2");
    scavtrap.takeDamage(99);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();

    std::cout << "----------------------------------------------------" << std::endl;
    // Test FragTrap functionalities
    fragtrap.attack("target3");
    fragtrap.takeDamage(15);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();

    return 0;
}