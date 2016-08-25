#ifndef QLUISACTIONPARAMETER_H
#define QLUISACTIONPARAMETER_H

#include "qluis_global.h"
#include <QString>
#include <QVector>
#include "qluisactionparametervalue.h"

class QLUISSHARED_EXPORT QLuisActionParameter
{
public:
    QLuisActionParameter();

    QLuisActionParameter(const QLuisActionParameter& src);
    QLuisActionParameter& operator=(const QLuisActionParameter& src);

    QString Name;
    bool Required;
    QVector<QLuisActionParameterValue> Value;
};

#endif // QLUISACTIONPARAMETER_H
