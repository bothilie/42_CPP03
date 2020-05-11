#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream> 
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private: 
    public:
        ScavTrap(std::string str);
        ~ScavTrap();
        ScavTrap(const ScavTrap &a);
        ScavTrap &operator=(const ScavTrap &ope);
        void meleeAttack(std::string const &target);
        void rangedAttack(std::string const &target);
        void challenge1();
        void challenge2();
        void challenge3();
        void challenge4();
        void challenge5();
        void ChallengeNewcomer();
};

#endif