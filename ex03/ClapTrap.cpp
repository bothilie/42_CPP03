#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const str, int hit, int max_hit, int energy, int max_energy, int level, int melee_dmg, int ranged_dmg, int armor) : _name(str), _hit(hit), _max_hit(max_hit), _energy(energy), _max_energy(max_energy), _level(level), _melee_dmg(melee_dmg), _ranged_dmg(ranged_dmg), _armor(armor)
{
    std::cout << _name << ": Constructor of ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
    std::cout << _name << ": Copy Constructor of ClapTrap called" << std::endl;
    *this = a;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ope)
{
    std::cout << _name << ": Assignation Constructor of ClapTrap called" << std::endl;
    this->_ranged_dmg = ope._ranged_dmg;
    this->_melee_dmg = ope._melee_dmg;
    this->_level = ope._level;
    this->_energy= ope._energy;
    this->_max_energy = ope._max_energy;
    return *this;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int i;
    if (amount > (unsigned int)_max_hit + _armor)
        i = _max_hit;
    else
        i = amount - _armor;
    this->_hit = this->_hit - i;
    if (this->_hit < 0)
    {
        i -= (0 - this->_hit);
        this->_hit = 0;
    }
    std::cout << this->_name << " lost " << i << " of hit" << std::endl;
    //if (this->hit == 0)
    //    std::cout << this->name << " is dead." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    int i;
    if (amount > (unsigned int)_max_hit)
        i = _max_hit;
    else
        i = amount;
    this->_hit = this->_hit + i;
    if (this->_hit > this->_max_hit)
    {
        i -= (this->_hit - _max_hit);
        this->_hit = _max_hit;
    }
    std::cout << this->_name << " won " << i << " of hit" << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return _name;
}
