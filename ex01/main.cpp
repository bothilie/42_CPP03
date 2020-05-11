#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main()
{
    FragTrap bob("Bob");
    ScavTrap jerem("Jerem");
    bob.vaulthunter_dot_exe("Jeremstar");
    jerem.ChallengeNewcomer();
    jerem.ChallengeNewcomer();
    jerem.ChallengeNewcomer();
    jerem.ChallengeNewcomer();
    jerem.meleeAttack("No one");
    jerem.rangedAttack("Everyone");
    jerem.takeDamage(30);
    jerem.beRepaired(50);
    jerem.rangedAttack("Guess who");
    jerem.takeDamage(500);
}