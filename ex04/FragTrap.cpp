#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str): ClapTrap(str, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << _name << ": Constructor of FragTrap was called" << std::endl;
};

FragTrap::~FragTrap()
{
    std::cout << _name << ": Destructor FragTrap was called" << std::endl;
};

FragTrap::FragTrap(FragTrap const &perso) : ClapTrap("", 100, 100, 100, 100, 1, 30, 20, 5)
{
    *this = perso;
    std::cout << _name << ": Copy Constructor of FragTrap was called" << std::endl;
};

FragTrap &FragTrap::operator=(const FragTrap &ope)
{
    this->_hit = ope._hit;
    this->_max_hit = ope._max_hit;
    this->_energy = ope._energy;
    this->_max_energy = ope._max_energy;
    this->_name = ope._name;
    this->_level = ope._level;
    this->_melee_dmg = ope._melee_dmg;
    this->_ranged_dmg = ope._ranged_dmg;
    this->_armor = ope._armor;
    std::cout << _name << ": Assignation Constructor of FragTrap was called" << std::endl;
    return *this;
}

void    FragTrap::rangedAttack(std::string const &target) const
{
    std::cout << "FR4G-TP " << this->_name << " attaque " << target << " à distance, cause " << _ranged_dmg << " points de dégâts" << std::endl; 
}

void    FragTrap::meleeAttack(std::string const &target) const
{
    std::cout << "FR4G-TP " << this->_name << " attaque " << target << " à distance, cause " << _melee_dmg << " points de dégâts" << std::endl; 
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    // Check si assez d'energie
    if (this->_energy < 25)
    {
        std::cout << this->_name << " has no enough enregy" << std::endl;
        return;
    }
    this->_energy -= 25;
    std::cout << this->_name << ": let's do an action" << std::endl;
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
    std::cout << this->_name << " is going to attackkkk hardly " << target << std::endl;
}

void FragTrap::action2(std::string const &target)
{
    std::cout << this->_name << " is going to do attackkk softly " << target << std::endl;
}

void FragTrap::action3(std::string const &target)
{
    std::cout << this->_name << " is going to do attackkk kindly " << target << std::endl;
}

void FragTrap::action4(std::string const &target)
{
    std::cout << this->_name << " is going to do attackkk heavy " << target << std::endl;
}

void FragTrap::action5(std::string const &target)
{
    std::cout << this->_name << " is going to do attackkk rapidly " << target << std::endl;
}