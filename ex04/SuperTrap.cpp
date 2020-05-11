#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const name):     ClapTrap(name, 100, 100, 120, 120, 1, 60, 30, 5), FragTrap(name), NinjaTrap(name)
{
    std::cout << getName() << ": Constructor SuperTrap called" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << getName() << ": Destructor SuperTrap called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &trap) :  ClapTrap("", 100, 100, 120, 120, 1, 60, 30, 5), FragTrap(""), NinjaTrap("")
{
    *this = trap;
    std::cout << getName() << ": Copy Constructor SuperTrap called" << std::endl;
}

void    SuperTrap::rangedAttack(std::string const &target) const
{
    FragTrap::rangedAttack(target); 
}

void    SuperTrap::meleeAttack(std::string const &target) const
{
    NinjaTrap::meleeAttack(target);
}

SuperTrap &SuperTrap::operator=(const SuperTrap &ope)
{
    this->_hit = ope._hit;
    this->_max_hit = ope._max_hit;
    this->_energy = ope._energy;
    this->_max_energy = ope._max_energy;
    this->_name = ope._name;
    this->_level = ope._level;
    this->_melee_dmg = ope._melee_dmg;
    this->_ranged_dmg = ope._ranged_dmg;
    std::cout << getName() << ": Assignation Constructor SuperTrap called" << std::endl;
    return *this;
}