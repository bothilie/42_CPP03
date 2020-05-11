#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const str):    ClapTrap(str, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << _name << ": Constructor of ScavTrap called"<< std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << ": ScavTrap destructeur called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap("", 100, 100, 50, 50, 1, 20, 15, 3)
{
    *this = a;
   std::cout << _name << ": Copy Constructor of ScavTrap called"<< std::endl;
}

void    ScavTrap::rangedAttack(std::string const &target) const
{
    //this->hit -= ranged;
    std::cout << "SCAV_TP " << this->_name << " attaque " << target << " à distance, cause " << _ranged_dmg << " points de dégâts" << std::endl; 
}

void    ScavTrap::meleeAttack(std::string const &target) const
{
    //this->hit -= melee;
    std::cout << "SCAV_TP " << this->_name << " attaque " << target << " à distance, cause " << _melee_dmg << " points de dégâts" << std::endl; 
}

void    ScavTrap::ChallengeNewcomer()
{
    if (this->_energy < 25)
    {
        std::cout << this->_name << " has no enough enregy" << std::endl;
        return;
    }
    this->_energy -= 25;
    int i = rand();
    i = i % 3;
    void (ScavTrap::*ptr[])() = {
        &ScavTrap::challenge1,
        &ScavTrap::challenge2,
        &ScavTrap::challenge3,
        &ScavTrap::challenge4,
        &ScavTrap::challenge5
    };
    (this->*ptr[i])();
}

void     ScavTrap::challenge1()
{
    std::cout << "Challenge 1 : " << _name << " has to open the door" << std::endl;
}

void     ScavTrap::challenge2()
{
    std::cout << "Challenge 2 : " << _name << " has to close the door" << std::endl;
}

void     ScavTrap::challenge3()
{
    std::cout << "Challenge 3 : " << _name << " has to open the window" << std::endl;
}

void     ScavTrap::challenge4()
{
    std::cout << "Challenge 4 : " << _name << " has to close the window" << std::endl;
}

void     ScavTrap::challenge5()
{
    std::cout << "Challenge 5 : " << _name << " has to scream hard" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ope)
{
    this->_hit = ope._hit;
    this->_max_hit = ope._max_hit;
    this->_energy = ope._energy;
    this->_max_energy = ope._max_energy;
    this->_name = ope._name;
    this->_level = ope._level;
    this->_melee_dmg = ope._melee_dmg;
    this->_ranged_dmg = ope._ranged_dmg;
    std::cout << _name << ": Assignation Constructor of ScavTrap called"<< std::endl;
    return *this;
}