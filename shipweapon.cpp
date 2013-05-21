#include "shipweapon.h"

//Constructor:
//Details: If providing a value for <initBonus>, enter it as a full percentage value (40 for "40%", not 0.4) -- the method will automatically make the necessary corrections.
ShipWeapon::ShipWeapon(QString initName,int initAttack,int initSize, int initUpkeep,int initCount, QString initType, int initInvade, double initBonus)
    : size(initSize), attack(initAttack), upkeep(initUpkeep), max_count(initCount), name(initName), bonus(initBonus), invasion_attack(initInvade), type(initType)
{
    if(initInvade = 0)
    {
        invasion_attack = initAttack;
    }
    /*
    if(initBonus != 1)
    {
        bonus = (initBonus / 100) + 1;
    }
    */
}
//================================
//supply the <newBonus> as its percentage value (40 for "40%, not 0.4).
void ShipWeapon::setBonus(double newBonus)
{
    bonus = (newBonus / 100) + 1;
}
//================================
