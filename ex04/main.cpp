#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <unistd.h>

int main()
{
    const FragTrap bob("Bob");
    const ScavTrap jerem("Jerem");
    NinjaTrap Shu("Shu");
    const NinjaTrap Xen("Xen");
    Shu.ninjaShoebox(jerem);
    Shu.ninjaShoebox(bob);
    Shu.ninjaShoebox(Xen);
    SuperTrap Sue("Sue");
   SuperTrap lala(Sue);
    Sue.rangedAttack("Benoit");
    Sue.vaulthunter_dot_exe("Robin");
    Sue.ninjaShoebox(bob);
}