#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout<<"ScavTrap default constructor called" <<std::endl;
}

ScavTrap::ScavTrap(std::string nm):ClapTrap(nm)
{
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout<<"ScavTrap parameterized constructor called" <<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap):ClapTrap(scavTrap)
{
    std::cout<<"ScavTrap copy constructor called" <<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
    if(this != &ScavTrap)
    {
        ClapTrap::operator=(ScavTrap);
        std::cout << " Scaptrap Copy assignment operator called" << std::endl;
    }
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
   
    if(hitPoint >0 && energyPoint > 0)
    {
        std::cout<<"ScavTrap "<<this->Name <<" attacks " <<target<<", causing "<<attackDamage <<" points of damage!"<<std::endl;

        this->energyPoint-= 1;
    }
    else if(hitPoint == 0)
    {
        std::cout<<"ScavTrap "<<this->Name <<" has no hit points left to attack"<<std::endl;
    }
    else
        std::cout<<"ScavTrap "<<this->Name <<" has no enrgy left to attack"<<std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->Name << " is now in Gatekeeper mode!" << std::endl;
}