#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str): name(str), hit(100), max_hit(100), energy(100), max_energy(100), level(1), melee_dmg(30), ranged_dmg(20), armor(5)
{
    std::cout << name << ": Constructor of FragTrap was called" << std::endl;
};

FragTrap::~FragTrap()
{
    std::cout << name << ": Destructor was called" << std::endl;
};

FragTrap::FragTrap(FragTrap const &perso)
{
     std::cout << name << ": Copy Constructor of FragTrap was called" << std::endl;
    hit = perso.hit;
    energy = perso.hit;
    name = perso.name;
    level = perso.level;
};

FragTrap &FragTrap::operator=(const FragTrap &ope)
{
     std::cout << name << ": Assignation Constructor of FragTrap was called" << std::endl;
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

void    FragTrap::takeDamage(unsigned int amount)
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

void    FragTrap::beRepaired(unsigned int amount)
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

void    FragTrap::rangedAttack(std::string const &target)
{
    //this->hit -= ranged;
    std::cout << "FR4G-TP " << this->name << " attaque " << target << " à distance, cause " << ranged_dmg << " points de dégâts" << std::endl; 
}

void    FragTrap::meleeAttack(std::string const &target)
{
    //this->hit -= melee;
    std::cout << "FR4G-TP " << this->name << " attaque " << target << " à distance, cause " << melee_dmg << " points de dégâts" << std::endl; 
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    // Check si assez d'energie
    if (this->energy < 25)
    {
        std::cout << this->name << " has no enough enregy" << std::endl;
        return;
    }
    this->energy -= 25;
    std::cout << this->name << ": let's do an action" << std::endl;
    int index = rand();
    //std::cout << "index: " << index << std::endl;
    index = (index % 5);
    // declaration du tableau de pointeurs
    void (FragTrap::*ptr[])(std::string const &) = {
        &FragTrap::action1,
        &FragTrap::action2,
        &FragTrap::action3,
        &FragTrap::action4,
        &FragTrap::action5
    };
    //Utalisation du tableau de pointeurs;
    //std::cout << "index: " << index << std::endl;
    (this->*ptr[index])(target);
}

void FragTrap::action1(std::string const &target)
{
    std::cout << this->name << " is going to attackkkk hardly " << target << std::endl;
}

void FragTrap::action2(std::string const &target)
{
    std::cout << this->name << " is going to do attackkk softly " << target << std::endl;
}

void FragTrap::action3(std::string const &target)
{
    std::cout << this->name << " is going to do attackkk kindly " << target << std::endl;
}

void FragTrap::action4(std::string const &target)
{
    std::cout << this->name << " is going to do attackkk heavy " << target << std::endl;
}

void FragTrap::action5(std::string const &target)
{
    std::cout << this->name << " is going to do attackkk rapidly " << target << std::endl;
}