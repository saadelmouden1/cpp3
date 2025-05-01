#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
        std::cout<<"****************ClapTrap test*************"<<std::endl;
        ClapTrap rb("hamza");
        ClapTrap a1(rb);
        ClapTrap b1;
        b1 = a1;
        
        rb.attack("Target A");
        rb.takeDamage(5);
        rb.beRepaired(3);
        
        rb.takeDamage(15); // This should bring HP to 0
        rb.attack("Target B"); // Should fail because HP is 0
        rb.beRepaired(5); // Should fail because HP is 0
    }

    { 
        std::cout<<"****************Scavtrap test*************"<<std::endl;
        ScavTrap robot("Saad");
        ScavTrap a(robot);
        ScavTrap b;
        b = a;
        
        robot.attack("Target A");
        robot.takeDamage(5);
        robot.beRepaired(3);
        
        robot.takeDamage(15); // This should bring HP to 0
        robot.attack("Target B"); // Should fail because HP is 0
        robot.beRepaired(5); // Should fail because HP is 0
        robot.guardGate();
    }
    
      { 
        std::cout<<"****************FragTrap test*************"<<std::endl;
        FragTrap robot("Saad");
        FragTrap a(robot);
        FragTrap b;
        b = a;
        
        robot.attack("Target A");
        robot.takeDamage(5);
        robot.beRepaired(3);
        
        robot.takeDamage(15); // This should bring HP to 0
        robot.attack("Target B"); // Should fail because HP is 0
        robot.beRepaired(5); // Should fail because HP is 0
        robot.highFivesGuys();
    }
    return 0;
}