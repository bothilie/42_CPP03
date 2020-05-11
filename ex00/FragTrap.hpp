#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
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
        FragTrap(std::string name);
        FragTrap(const FragTrap &perso);
        FragTrap &operator=(const FragTrap &perso);
        ~FragTrap();
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);
        void action1(std::string const &traget);
        void action2(std::string const &traget);
        void action3(std::string const &traget);
        void action4(std::string const &traget);
        void action5(std::string const &traget);
        void (FragTrap::*ptr[5])(std::string const &);
};


#endif