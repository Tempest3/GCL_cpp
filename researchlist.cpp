#include "researchlist.h"

ResearchList::ResearchList()
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
        query.prepare("select Count(*) from research_weapons");
        if(!query.exec())
            qDebug() << query.lastError();
        query.next();
        int entries = query.value(0).toInt();

        query.prepare("select * from research_weapons");
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
    /*
    // Hardcoded...
    weapons.push_back(ShipWeapon("Autocannon",1,3,15));
    weapons.push_back(ShipWeapon("Heavy Autocannon",2,4,30));
    weapons.push_back(ShipWeapon("Light Mass Driver",3,5,50));
    weapons.push_back(ShipWeapon( "Mass Driver",5,6,70));
    weapons.push_back(ShipWeapon("Heavy Mass Driver",7,7,98));
    weapons.push_back(ShipWeapon("Light Laser Cannon",12,9,192));
    weapons.push_back(ShipWeapon("Laser Cannon",15,10,269 ));
    weapons.push_back(ShipWeapon("Heavy Laser Cannon",18,11,375));
    weapons.push_back(ShipWeapon("Light Ion Cannon",25,13,740 ));
    weapons.push_back(ShipWeapon("Ion Cannon",29,14,1000 ));
    weapons.push_back(ShipWeapon("Heavy Ion Cannon",33,15,1400 ));
    weapons.push_back(ShipWeapon("Light Plasma Cannon",42,17,2800 ));
    weapons.push_back(ShipWeapon("Plasma Cannon",47,18,4000 ));
    weapons.push_back(ShipWeapon("Heavy Plasma Cannon",52,19,5600 ));
    weapons.push_back(ShipWeapon("Light Phase Cannon",63,21,10900 ));
    weapons.push_back(ShipWeapon("Phase Cannon",69,22,15200 ));
    weapons.push_back(ShipWeapon("Heavy Phase Cannon",75,23,21400 ));
    weapons.push_back(ShipWeapon("Light Graviton Shearer",88,25,41900 ));
    weapons.push_back(ShipWeapon("Graviton Shearer",95,26,58600 ));
    weapons.push_back(ShipWeapon("Heavy Graviton Shearer",102,27,82000 ));
    weapons.push_back(ShipWeapon("Light Disuptor Cannon",117,29,160000 ));
    weapons.push_back(ShipWeapon("Disruptor Cannon",125,30,225000 ));
    weapons.push_back(ShipWeapon("Heavy Disruptor Cannon",133,31,315000 ));
    weapons.push_back(ShipWeapon("Light Quantum Devastator",150,33,617500 ));
    weapons.push_back(ShipWeapon("Quantum Devastator",159,34,860000 ));
    weapons.push_back(ShipWeapon("Heavy Quantum Devastator",168,35,1200000 ));
    weapons.push_back(ShipWeapon("Light Singularity Launcher",187,37,2370000 ));
    weapons.push_back(ShipWeapon("Singularity Launcher",197,38,3320000 ));
    weapons.push_back(ShipWeapon("Heavy Singularity Launcher",207,39,4650000 ));
    weapons.push_back(ShipWeapon("Light Antiproton Cannon",228,41,9150000 ));
    weapons.push_back(ShipWeapon("Antiproton Cannon",239,42,12750000 ));
    weapons.push_back(ShipWeapon("Heavy Antiproton Cannon",250,43,17900000 ));
    weapons.push_back(ShipWeapon("Light Null Ray",274,45,35000000 ));
    weapons.push_back(ShipWeapon("Null Ray",287,46,49000000 ));
    weapons.push_back(ShipWeapon("Heavy Null Ray",300,47,67500000 ));
    weapons.push_back(ShipWeapon("Light Thetachron Cannon",328,49,132500000 ));
    weapons.push_back(ShipWeapon("Thetachron Cannon",343,50,187500000 ));
    weapons.push_back(ShipWeapon("Heavy Thetachron Cannon",358,51,260000000 ));
    weapons.push_back(ShipWeapon("Light Quasi-Chaotic Blaster",391,53,510000000 ));
    weapons.push_back(ShipWeapon("Quasi-Chaotic Blaster",409,54,725000000 ));
    weapons.push_back(ShipWeapon("Heavy Quasi-Chaotic Blaster",430,55,1025000000 ));

    */

    //for creating the sqlite entries...
    /*
    if(!db.open() )
        qDebug() << db.lastError();
    for(int i = 0; i < weapons.size(); ++i)
    {
        ShipWeapon curWeap = weapons.at(i);
        QSqlQuery query;
        query.prepare("insert into research_weapons(Name, Attack, Size, Upkeep, Max, Type, Invasion, Bonus) values(:name, :attack, :size, :upkeep, :max, :type, :invasion, :bonus)");
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
    */

}
