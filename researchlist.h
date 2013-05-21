#ifndef RESEARCHLIST_H
#define RESEARCHLIST_H

#include <vector>
#include <shipweapon.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>


using namespace std;

class ResearchList
{
public:
    ResearchList();
    QSqlDatabase db;
    vector<ShipWeapon> weapons;

};

#endif // RESEARCHLIST_H
