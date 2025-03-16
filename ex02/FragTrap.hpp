#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap: public ClapTrap
{

    public:
        FragTrap(void);
        FragTrap(std::string nm);
        FragTrap(const FragTrap &fragTrap);
        FragTrap &operator=(const FragTrap &FragTrap);
        ~FragTrap();

      

};

#endif