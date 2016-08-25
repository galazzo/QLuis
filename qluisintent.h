#ifndef QLUISINTENT_H
#define QLUISINTENT_H

#include "qluis_global.h"
#include <QString>
#include "qluisaction.h"

class QLUISSHARED_EXPORT QLuisIntent
{
public:
    QLuisIntent();

    QLuisIntent(const QLuisIntent& src);
    QLuisIntent& operator=(const QLuisIntent& src);

    QString Intent;
    double Score;

    QVector<QLuisAction> Actions;
};

#endif // QLUISINTENT_H
