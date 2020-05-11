#include "FragTrap.hpp"

int main()
{
    FragTrap bob("Bob");
    FragTrap   carl(bob);
    carl.meleeAttack("Carlos");
    bob.vaulthunter_dot_exe("Yannick");
    bob.meleeAttack("Laurent");
    bob.rangedAttack("Philippe");
    bob.takeDamage(60);
    bob.takeDamage(55);
    bob.beRepaired(50);
    bob.beRepaired(150);
    bob.takeDamage(250);
    bob.vaulthunter_dot_exe("Yannick");
    bob.vaulthunter_dot_exe("Yannick");
    bob.vaulthunter_dot_exe("Yannick");
    bob.vaulthunter_dot_exe("Yannick");
    bob.vaulthunter_dot_exe("Yannick");
}