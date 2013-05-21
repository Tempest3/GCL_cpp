#include "playership.h"


PlayerShip::PlayerShip(): tactical_officers(0), mission_completion(0), bonuses(1), special_attack(0), invasion_bonuses(1), invasion_attack(0)
{
    ResearchedWeapons = new vector<ShipWeapon>;
    SpecialWeapons = new vector<ShipWeapon>;


}

//Adds together all the invasion attack strengths of both the weapons lists
//... and multiplies by the bonuses
double PlayerShip::getInvasionAttack()
{
    double invasionAttack = 0;
    for(int i = 0; i < ResearchedWeapons->size(); i ++)
    {
        ShipWeapon curWeap = ResearchedWeapons->at(i);
        invasionAttack += curWeap.getInvasion();
    }
    for(int i = 0; i < SpecialWeapons->size(); i ++)
    {
        ShipWeapon curWeap = SpecialWeapons->at(i);
        invasionAttack += curWeap.getInvasion();
    }
    invasionAttack += invasion_attack + special_attack;
    invasionAttack = invasionAttack * bonuses;

    return invasionAttack;
}

//Adds together all the attack strengths of both the weapons lists and <special_attack>
//... and multiplies by the bonuses
double PlayerShip::getAttack()
{
    double attack = 0;
    for(int i = 0; i < ResearchedWeapons->size(); i ++)
    {
        ShipWeapon curWeap = ResearchedWeapons->at(i);
        attack += curWeap.getAttack();
    }
    for(int i = 0; i < SpecialWeapons->size(); i ++)
    {
        ShipWeapon curWeap = SpecialWeapons->at(i);
        attack += curWeap.getAttack();
    }
    attack = (attack + special_attack) * bonuses;

    return attack;
}

//Adds <newWeapon> to <ResearchWeapons> if the max count has not been reached.
bool PlayerShip::addRW(ShipWeapon newWeapon)
{
    int typeCount = 0;
    if(ResearchedWeapons->size() > 0)
    {
        for(int i = 0; i < ResearchedWeapons->size(); ++i)
        {
            if(ResearchedWeapons->at(i).getType() == newWeapon.getType())
            {
                typeCount++;
            }
        }
    }
    if(typeCount >= newWeapon.getMax())
    {
        return false;
    }
    else
    {
        ResearchedWeapons->push_back(newWeapon);
        return true;
    }
}

//Adds <newWeapon> to <SpecialWeapons> if the max count has not been reached.
bool PlayerShip::addSW(ShipWeapon newWeapon)
{
    int typeCount = 0;
    if(SpecialWeapons->size() > 0)
    {
        for(int i = 0; i < SpecialWeapons->size(); ++i)
        {
            if(SpecialWeapons->at(i).getType() == newWeapon.getType())
            {
                typeCount++;
            }
        }
    }
    if(typeCount >= newWeapon.getMax())
    {
        return false;
    }
    else
    {
        SpecialWeapons->push_back(newWeapon);
        return true;
    }
}
//Removes the weapon located at <index> in <ResearchedWeapons>
bool PlayerShip::removeRW(int index)
{
    if(index < ResearchedWeapons->size())
    {
        ResearchedWeapons->erase(ResearchedWeapons->begin() + index, ResearchedWeapons->begin() + index + 1);
        return true;
    }
    else
    {
        return false;
    }
}

//Removes the weapon located at <index> in <SpecialWeapons>
bool PlayerShip::removeSW(int index)
{
    if(index < SpecialWeapons->size())
    {
        SpecialWeapons->erase(SpecialWeapons->begin() + index, SpecialWeapons->begin() + index + 1);
        return true;
    }
    else
    {
        return false;
    }
}

// Write weapons lists to file...
void PlayerShip::Save()
{
    // Write researched weapons to file...
    ofstream outfile("researched.glc");

    QString output = "";
    for(int i = 0; i < ResearchedWeapons->size(); ++i)
    {
        ShipWeapon curWeap = ResearchedWeapons->at(i);

        output += curWeap.getName() + ",";
        output += QString::number(curWeap.getAttack()) + ",";
        output += QString::number(curWeap.getSize()) + ",";
        output += QString::number(curWeap.getUpkeep()) + ",";
        output += QString::number(curWeap.getMax()) + ",";
        output += curWeap.getType() + ",";
        output += QString::number(curWeap.getInvasion()) + ",";
        output += "1";

        output += "\n";
    }
    outfile << output.toStdString();
    //===========================================
    // Write special weapons to file...
    ofstream outfile2("special.glc");

    output = "";
    for(int i = 0; i < SpecialWeapons->size(); ++i)
    {
        ShipWeapon curWeap = SpecialWeapons->at(i);

        output += curWeap.getName() + ",";
        output += QString::number(curWeap.getAttack()) + ",";
        output += QString::number(curWeap.getSize()) + ",";
        output += QString::number(curWeap.getUpkeep()) + ",";
        output += QString::number(curWeap.getMax()) + ",";
        output += curWeap.getType() + ",";
        output += QString::number(curWeap.getInvasion()) + ",";
        output += "1";

        output += "\n";
    }
    outfile2 << output.toStdString();
}

void PlayerShip::Load()
{
    //Load Researched Weapons
    QFile rwfile("researched.glc");

    if (!rwfile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        return;
    }
    QTextStream rw_in(&rwfile);
    while(!rw_in.atEnd())
    {
        QString line = rw_in.readLine();
        QStringList data = line.split(",");

        QString name = data.at(0);
        int attack = data.at(1).toInt();
        int size = data.at(2).toInt();
        int upkeep = data.at(3).toInt();

        ResearchedWeapons->push_back(ShipWeapon(name,attack,size,upkeep));
        line = "";
    }
    rwfile.close();
    //========================================
    //Load Special Weapons

    QFile swfile("special.glc");

    if (!swfile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        return;
    }
    QTextStream sw_in(&swfile);
    while(!sw_in.atEnd())
    {
        QString line = sw_in.readLine();
        QStringList data = line.split(",");

        QString name = data.at(0);
        int attack = data.at(1).toInt();
        int size = data.at(2).toInt();
        int upkeep = data.at(3).toInt();
        int max = data.at(4).toInt();
        QString type = data.at(5);
        int invasion = data.at(6).toInt();
        double bonus = data.at(7).toDouble();

        SpecialWeapons->push_back(ShipWeapon(name,attack,size,upkeep,max,type,invasion,bonus));
    }
    swfile.close();

}
