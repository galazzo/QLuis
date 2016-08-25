#ifndef QLUISACTIONPARAMETERVALUE_H
#define QLUISACTIONPARAMETERVALUE_H

#include "qluis_global.h"
#include <QString>

class QLUISSHARED_EXPORT QLuisActionParameterValue
{
public:
    QLuisActionParameterValue();

    QLuisActionParameterValue(const QLuisActionParameterValue& src);
    QLuisActionParameterValue& operator=(const QLuisActionParameterValue& src);

    QString Entity;
    QString Type;
    double Score;
};

#endif // QLUISACTIONPARAMETERVALUE_H
