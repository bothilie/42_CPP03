#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
    public:
        NinjaTrap(std::string str);
        ~NinjaTrap();
        NinjaTrap(const NinjaTrap &a);
        NinjaTrap &operator=(const NinjaTrap &ope);

        virtual void rangedAttack(std::string const &target) const;
        virtual void meleeAttack(std::string const &target) const;
        
        void ninjaShoebox(const FragTrap &frag);
        void ninjaShoebox(const NinjaTrap &ninja);
        void ninjaShoebox(const ScavTrap &scav);
};

#endif