#ifndef SPECIALLIST_H
#define SPECIALLIST_H

#include <vector>
#include <shipweapon.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>

using namespace std;

class SpecialList
{

public:
    SpecialList();
    vector<ShipWeapon> weapons;
    QSqlDatabase db;

};

#endif // SPECIALLIST_H
