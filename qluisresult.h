#ifndef QLUISRESULT_H
#define QLUISRESULT_H

#include "qluis_global.h"
#include <QString>
#include <QVector>
#include "qluisintent.h"
#include "qluisentity.h"

class QLUISSHARED_EXPORT QLuisResult
{
public:
    QLuisResult();

    QLuisResult(const QLuisResult& src);
    QLuisResult& operator=(const QLuisResult& src);


    QString Query;
    QVector<QLuisIntent> Intents;
    QVector<QLuisEntity> Entities;
};

#endif // QLUISRESULT_H
