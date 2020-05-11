#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private: 
    public:
        FragTrap(std::string name);
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        FragTrap(const FragTrap &perso);
        FragTrap &operator=(const FragTrap &perso);
        ~FragTrap();
        void action1(std::string const &traget);
        void action2(std::string const &traget);
        void action3(std::string const &traget);
        void action4(std::string const &traget);
        void action5(std::string const &traget);
        void (FragTrap::*ptr[5])(std::string const &);
        void vaulthunter_dot_exe(std::string const &target);
};


#endif