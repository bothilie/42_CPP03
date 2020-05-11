#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string str): ClapTrap(str, 60, 60, 120, 120, 1, 60, 5 , 0)
{
    std::cout << _name << ": Constructor NinjaTrap called" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << _name << ": Destructor NinjaTrap called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &a) : ClapTrap("", 60, 60, 120, 120, 1, 60, 5 , 0)
{
    *this = a;
    std::cout << _name << ": Copy Constructor NinjaTrap called" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ope)
{
    this->_hit = ope._hit;
    this->_max_hit = ope._max_hit;
    this->_energy = ope._energy;
    this->_max_energy = ope._max_energy;
    this->_name = ope._name;
    this->_level = ope._level;
    this->_melee_dmg = ope._melee_dmg;
    this->_ranged_dmg = ope._ranged_dmg;
    std::cout << _name << ": Assignation Constructor NinjaTrap called" << std::endl;
    return *this;
}

void    NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "NJNA-TP " << this->_name << " attaque " << target << " à distance, cause " << _ranged_dmg << " points de dégâts" << std::endl; 
}

void    NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << "NJNA-TP " << this->_name << " attaque " << target << " à distance, cause " << _melee_dmg << " points de dégâts" << std::endl; 
}

void NinjaTrap::ninjaShoebox(const FragTrap &frag)
{
    std::cout << _name << ": Ninja Attack to the Frag " << frag.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &ninja)
{
    std::cout << _name << ": Ninja Attack to the Ninja " << ninja.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &scav)
{
    std::cout << _name << ": Ninja Attack to the Scav " << scav.getName() << std::endl;
}