#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Saad");
    
    robot.attack("Target A");
    robot.takeDamage(5);
    robot.beRepaired(3);
    
    robot.takeDamage(15); // This should bring HP to 0
    robot.attack("Target B"); // Should fail because HP is 0
    robot.beRepaired(5); // Should fail because HP is 0
    
    return 0;
}
