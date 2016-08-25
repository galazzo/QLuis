#include "qluisintent.h"

QLuisIntent::QLuisIntent()
{

}

QLuisIntent::QLuisIntent(const QLuisIntent& src){

    if(&src!=this){
        *this = src;
    }
}

QLuisIntent& QLuisIntent::operator =(const QLuisIntent& src)
{
    if(&src == this)
        return *this;

    this->Intent = src.Intent;
    this->Score = src.Score;
    this->Actions = src.Actions;

    return *this;
}
