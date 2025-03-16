#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout<<"FragTrap default constructor called" <<std::endl;
}

FragTrap::FragTrap(std::string nm):ClapTrap(nm)
{
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout<<"FragTrap parameterized constructor called" <<std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap): ClapTrap(fragTrap)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
    if(this != &FragTrap)
    {
        ClapTrap::operator=(FragTrap);
        std::cout << " Fragtrap Copy assignment operator called" << std::endl;
    }
    return (*this);
}


