#ifndef QLUISACTION_H
#define QLUISACTION_H

#include "qluis_global.h"
#include <QString>
#include <QVector>
#include "qluisactionparameter.h"

class QLUISSHARED_EXPORT QLuisAction
{
public:
    QLuisAction();

    QLuisAction(const QLuisAction& src);
    QLuisAction& operator=(const QLuisAction& src);


    bool Triggered;
    QString Name;

    QVector<QLuisActionParameter> Parameters;
};

#endif // QLUISACTION_H
