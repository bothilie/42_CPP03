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
        virtual void meleeAttack(std::string const &target) const;
        virtual void rangedAttack(std::string const &target) const;
        void challenge1();
        void challenge2();
        void challenge3();
        void challenge4();
        void challenge5();
        void ChallengeNewcomer();
};

#endif