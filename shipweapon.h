#ifndef SHIPWEAPON_H
#define SHIPWEAPON_H

#include <QString>

class ShipWeapon
{
    int size, attack, upkeep, invasion_attack, max_count;
    QString name, type;
    double bonus;

public:
    //Constructor:
    //Details: If providing a value for <initBonus>, enter it as a full percentage value (40 for "40%", not 0.4) -- the method will automatically make the necessary corrections.
    ShipWeapon(QString initName,int initAttack,int initSize, int initUpkeep,int initCount = 8, QString initType = "standard weapon",  int initInvade = 1, double initBonus = 1);

    //Accessor methods:
    QString getName() { return name; }
    QString getType() { return type; }
    int getSize() { return size; }
    int getAttack() { return attack * bonus; }
    int getInvasion() { return invasion_attack * bonus; }
    int getUpkeep() { return upkeep; }
    int getMax() { return max_count; }

    //Mutator methods:

    //supply the <newBonus> as its percentage value (40 for "40%, not 0.4).
    void setBonus(double newBonus);

};

#endif // SHIPWEAPON_H
