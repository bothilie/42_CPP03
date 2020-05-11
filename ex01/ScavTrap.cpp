#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const str): name(str), hit(100), max_hit(100), energy(50), max_energy(50), level(1), melee_dmg(20), ranged_dmg(15), armor(3)
{
    std::cout << "Creation of ScavTrap: " << str << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << ": ScavTrap destructeur called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
     std::cout << name << ": Copy Constructor of ScavTrap was called" << std::endl;
    *this = a;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ope)
{
     std::cout << name << ": Assignation Constructor of ScavTrap was called" << std::endl;
    this->hit = ope.hit;
    this->max_hit = ope.max_hit;
    this->energy = ope.energy;
    this->max_energy = ope.max_energy;
    this->name = ope.name;
    this->level = ope.level;
    this->melee_dmg = ope.melee_dmg;
    this->ranged_dmg = ope.ranged_dmg;
    return *this;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    int i;
    if (amount > (unsigned int)max_hit + armor)
        i = max_hit;
    else
        i = amount - armor;
    this->hit = this->hit - i;
    if (this->hit < 0)
    {
        i -= (0 - this->hit);
        this->hit = 0;
    }
    std::cout << this->name << " lost " << i << " of hit" << std::endl;
    //if (this->hit == 0)
    //    std::cout << this->name << " is dead." << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    int i;
    if (amount > (unsigned int)max_hit)
        i = max_hit;
    else
        i = amount;
    this->hit = this->hit + i;
    if (this->hit > this->max_hit)
    {
        i -= (this->hit - max_hit);
        this->hit = max_hit;
    }
    std::cout << this->name << " won " << i << " of hit" << std::endl;
}

void    ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "SCAV_TP " << this->name << " attaque " << target << " à distance, cause " << ranged_dmg << " points de dégâts" << std::endl; 
}

void    ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SCAV_TP " << this->name << " attaque " << target << " à distance, cause " << melee_dmg << " points de dégâts" << std::endl; 
}

void    ScavTrap::ChallengeNewcomer()
{
    if (this->energy < 25)
    {
        std::cout << this->name << " has no enough enregy" << std::endl;
        return;
    }
    this->energy -= 25;
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
    std::cout << "Challenge 1 : " << name << " has to open the door" << std::endl;
}

void     ScavTrap::challenge2()
{
    std::cout << "Challenge 2 : " << name << " has to close the door" << std::endl;
}

void     ScavTrap::challenge3()
{
    std::cout << "Challenge 3 : " << name << " has to open the window" << std::endl;
}

void     ScavTrap::challenge4()
{
    std::cout << "Challenge 4 : " << name << " has to close the window" << std::endl;
}

void     ScavTrap::challenge5()
{
    std::cout << "Challenge 5 : " << name << " has to scream hard" << std::endl;
}