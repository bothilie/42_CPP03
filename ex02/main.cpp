#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <unistd.h>

int main()
{
    FragTrap bob("Bob");
    ScavTrap jerem("Jerem");
    bob.vaulthunter_dot_exe("Dada");
    bob.meleeAttack("Joseph");
    jerem.rangedAttack("Joseph");
    bob.takeDamage(30);
    bob.beRepaired(3000);
    jerem.takeDamage(30);
    jerem.beRepaired(3000);
}