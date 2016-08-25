#ifndef QLUISENTITY_H
#define QLUISENTITY_H

#include "qluis_global.h"
#include <QString>

class QLUISSHARED_EXPORT QLuisEntity
{
public:
    QLuisEntity();

    QLuisEntity(const QLuisEntity& src);
    QLuisEntity& operator=(const QLuisEntity& src);

    QString Entity;
    QString Type;
    int StartIndex;
    int EndIndex;
    double Score;    
};

#endif // QLUISENTITY_H
