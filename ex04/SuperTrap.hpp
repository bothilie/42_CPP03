#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP


#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
    SuperTrap(std::string const str);
    ~SuperTrap();
    SuperTrap(const SuperTrap &trap);
    SuperTrap &operator=(const SuperTrap &trap);
    
    virtual void meleeAttack(std::string const &target) const;
    virtual void rangedAttack(std::string const &target) const;
};

#endif 