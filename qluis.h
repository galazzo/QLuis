#ifndef QLUIS_H
#define QLUIS_H

#include "qluis_global.h"
#include "qluisresult.h"
#include <QObject>
#include <QString>

using namespace std;

class QLUISSHARED_EXPORT QLuis : QObject
{

    Q_OBJECT
    Q_CLASSINFO("author", "Sebastiano Galazzo")

public:
    QLuis(QString ModelID, QString SubscriptionKey);

    QLuisResult* Call(QString query);

private:

    QString subscription_key;
    QString model_id;
    const static QString Endpoint;
};

#endif // QLUIS_H
