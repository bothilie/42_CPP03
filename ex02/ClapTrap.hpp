#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    protected:
        std::string _name;
        int _hit;
        int _max_hit;
        int _energy;
        int _max_energy;
        int _level;
        int _melee_dmg;
        int _ranged_dmg;
        int _armor;
    public: 

        ClapTrap(std::string const str, int hit, int max_hit, int energy, int max_energy, int level, int melee_dmg, int ranged_dmg, int armor);
        ~ClapTrap();
        ClapTrap(const ClapTrap &a);
        ClapTrap &operator=(const ClapTrap &perso);
        virtual void rangedAttack(std::string const &target) = 0;
        virtual void meleeAttack(std::string const &target) = 0;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif