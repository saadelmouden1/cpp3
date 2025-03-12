#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Name("Clap"),hitPoint(10),energyPoint(10),attackDamage(0)
{
    std::cout<<"default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string nm):hitPoint(10),energyPoint(10),attackDamage(0)
{
    std::cout<<"paramiterised constructor called"<<std::endl;
    this->Name = nm;
}
ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
     std::cout<<"copy constructor called"<<std::endl;
    *this = clapTrap;

}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
    if(this != &clapTrap)
    {
        this->Name = clapTrap.Name;
        this->hitPoint = clapTrap.hitPoint;
        this->energyPoint = clapTrap.energyPoint;
        this->attackDamage = clapTrap.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout<<"destractor called"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout<<"ClapTrap "<<this->Name <<" has no enrgy or hit points left to attack"<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<<this->Name <<" attacks" <<target<<", causing "<<attackDamage <<"points of damage!"<<std::endl;
    this->energyPoint-= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout<<"ClapTrap "<<this->Name <<" is dawn already"<<std::endl;
        return;
    }
    hitPoint-= amount;
    if(hitPoint < 0)
        hitPoint = 0;
      std::cout<<"ClapTrap"<<this->Name <<" takes" <<amount <<" damge,";
      std::cout<<this->Name<<" has"<< hitPoint<<" now"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     if(hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout<<"ClapTrap "<<this->Name <<" has no enrgy or hit points left to repaire"<<std::endl;
        return;
    }
    hitPoint += amount;
    energyPoint--;
    std::cout<<"ClapTrap "<<this->Name <<" repaired with "<<amount<<" hit points,";
    std::cout<<this->Name<<" has"<< hitPoint<<" now"<<std::endl;
}