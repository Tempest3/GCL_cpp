#include "speciallist.h"

SpecialList::SpecialList()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("gl_calculator.sqlite");

    if(!db.open())
    {
        qDebug() << db.lastError();
    }
    else
    {
        //find the number of rows in current table...
        QSqlQuery query;
        query.prepare("select Count(*) from special_weapons");
        if(!query.exec())
            qDebug() << query.lastError();
        query.next();
        int entries = query.value(0).toInt();

        query.prepare("select * from special_weapons");
        if(!query.exec() )
            qDebug() << query.lastError();
        for(int i = 0; i < entries; ++i)
        {
            query.next();
            QString name = query.value(0).toString();
            int attack = query.value(1).toInt();
            int size = query.value(2).toInt();
            int upkeep = query.value(3).toInt();
            int max = query.value(4).toInt();
            QString type = query.value(5).toString();
            int invasion = query.value(6).toInt();
            double bonus = query.value(7).toDouble();

            weapons.push_back(ShipWeapon(name,attack,size,upkeep,max,type,invasion,bonus));
        }


        db.close();
    }

    //hardcoded
    /*
    weapons.push_back(ShipWeapon("Bane Emitter",20, 10,100,4,"bane emitters",20));
    weapons.push_back(ShipWeapon("Charged Bane Emitter",30,12,100,4,"bane emitters",30));
    weapons.push_back(ShipWeapon("Crimson Auto-Laser",25,5,100,4,"crimson weapons"));
    weapons.push_back(ShipWeapon("Crimson Auto-Phaser",40,8,12500,4,"crimson weapons"));
    weapons.push_back(ShipWeapon("Exotic Pulser",30,5,2500,3,"exotic pulsers"));
    weapons.push_back(ShipWeapon("Ion Pulse Ballistae",80,10,125000,4,"drannik weapons"));
    weapons.push_back(ShipWeapon("Korteth Twin-Blaster",100,14,125000,4,"crimson weapons"));
    weapons.push_back(ShipWeapon("Lazuli Mind Controller",35,8,25000,3,"lazuli weapons",35));
    weapons.push_back(ShipWeapon("Leviathan Rift-Emitter",30,13,5000,4,"octafari weapons"));
    weapons.push_back(ShipWeapon("Psionic Amplifier",30,10,10000,1,"psionic amplifier",30));
    weapons.push_back(ShipWeapon("Vortul Blast Phaser",75,12,25000,4,"crimson weapons"));
    weapons.push_back(ShipWeapon("Dominion Cannon",50,8,5000,4,"dominion cannons"));
    weapons.push_back(ShipWeapon("Dominion Cannon MkII",90,12,25000,4,"dominion cannons"));
    weapons.push_back(ShipWeapon("Dominion Cannon MkIII",150,17,250000,4,"dominion cannons"));
    weapons.push_back(ShipWeapon("Taltherian Sentry",55,16,100,4,"taltherian sentries"));
    weapons.push_back(ShipWeapon("Mod Xecti Disruptor +20",15,20,3700,4,"xecti disruptors"));
    weapons.push_back(ShipWeapon("Mod Xecti Disruptor +40",15,40,3700,4,"xecti disruptors"));
    weapons.push_back(ShipWeapon("Surge Cannon MkI",40,9,250,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkII",60,12,25000,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkIII",100,17,250000,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkIV",150,20,250000,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkV",200,24,1000000,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkVI",300,30,25000000,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkVII",400,36,100000000,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkVIII",550,40,150000000,2,"radiant weapons"));
    weapons.push_back(ShipWeapon("Surge Cannon MkX",675,50,200000000,2,"radiant weapons"));
    */

    //code to generate sqlite entries...
    /*
    if(!db.open() )
        qDebug() << db.lastError();
    for(int i = 0; i < weapons.size(); ++i)
    {
        ShipWeapon curWeap = weapons.at(i);
        QSqlQuery query;
        query.prepare("insert into special_weapons(Name, Attack, Size, Upkeep, Max, Type, Invasion, Bonus) values(:name, :attack, :size, :upkeep, :max, :type, :invasion, :bonus)");
        query.bindValue(":name", curWeap.getName());
        query.bindValue(":attack", curWeap.getAttack());
        query.bindValue(":size", curWeap.getSize());
        query.bindValue(":upkeep", curWeap.getUpkeep());
        query.bindValue(":max", curWeap.getMax());
        query.bindValue(":type", curWeap.getType());
        query.bindValue(":invasion", curWeap.getInvasion());
        query.bindValue(":bonus", 1);
        if(!query.exec() )
            qDebug() <<query.lastError();
    }
    db.close();
    */

}
