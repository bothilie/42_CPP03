#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream> 

class ScavTrap
{
    private: 
        std::string name;
        int hit;
        int max_hit;
        int energy;
        int max_energy;
        int level;
        int melee_dmg;
        int ranged_dmg;
        int armor;
    public:
        ScavTrap(std::string str);
        ~ScavTrap();
        ScavTrap(const ScavTrap &a);
        ScavTrap &operator=(const ScavTrap &ope);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
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