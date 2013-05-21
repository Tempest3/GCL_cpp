#ifndef PLAYERSHIP_H
#define PLAYERSHIP_H

#include "shipweapon.h"
#include <QObject>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>

using namespace std;

class PlayerShip : public QObject
{
    vector<ShipWeapon> *ResearchedWeapons, *SpecialWeapons;
    int tactical_officers, mission_completion;
    double bonuses, invasion_bonuses, special_attack, invasion_attack;

public:
    PlayerShip();
    PlayerShip(vector<ShipWeapon> *initRW, vector<ShipWeapon> *initSW, int initTacOfficers, int initMissions, double initBonuses = 1, double initSpecial = 0, double initInvadeBonuses = 1, double initInvasionAttack = 0)
        : ResearchedWeapons(initRW), SpecialWeapons(initSW), tactical_officers(initTacOfficers), mission_completion(initMissions), bonuses(initBonuses), special_attack(initSpecial), invasion_bonuses(initInvadeBonuses), invasion_attack(initInvasionAttack) {}

    //Accessor methods:
    vector<ShipWeapon>* getRW() { return ResearchedWeapons; }
    vector<ShipWeapon>* getSW() { return SpecialWeapons; }
    int getTacOfficers() { return tactical_officers; }
    int getMissions() { return mission_completion; }
    double getInvasionAttack();
    double getAttack();

    //Mutator methods:
    bool addRW(ShipWeapon newWeapon);
    bool addSW(ShipWeapon newWeapon);
    bool removeRW(int index);
    bool removeSW(int index);
    void setBonus(double newBonus) { bonuses = (newBonus / 100) + 1; }
    void setInvadeBonus(double newBonus) { invasion_bonuses = (newBonus / 100) + 1; }
    void addInvadeBonus(double newBonus) { invasion_bonuses = invasion_bonuses * ((newBonus/100) + 1); }
    void addBonus(double newBonus) { bonuses = bonuses * ((newBonus/ 100) + 1); }
    void setAttack(double newAttack) { special_attack = newAttack; }
    void addAttack(double newAttack) { special_attack += newAttack; }
    void setInvadeAttack(double newInvade) { invasion_attack = newInvade; }
    void addInvadeAttack(double newInvade) { invasion_attack += newInvade;}

    //Save/Load options
    void Save();
    void Load();


};

#endif // PLAYERSHIP_H
