#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{

    protected:
        std::string Name;
        int hitPoint;
        int energyPoint;
        int attackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string nm);
        ClapTrap(const ClapTrap &clapTrap);
        ClapTrap &operator=(const ClapTrap &ClapTrap);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif