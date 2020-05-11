#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <unistd.h>

int main()
{
    const FragTrap bob("Bob");
    const ScavTrap jerem("Jerem");
    NinjaTrap Shu("Shu");
    NinjaTrap lala(Shu);
    const NinjaTrap Xen("Xen");
    //Shu.ninjaShoebox(lila);
    Shu.ninjaShoebox(jerem);
    Shu.ninjaShoebox(bob);
    Shu.ninjaShoebox(Xen);
}