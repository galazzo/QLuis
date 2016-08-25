#include "qluisentity.h"

QLuisEntity::QLuisEntity()
{

}

QLuisEntity::QLuisEntity(const QLuisEntity& src){

    if(&src!=this){
        *this = src;
    }
}

QLuisEntity& QLuisEntity::operator =(const QLuisEntity& src)
{
    if(&src == this)
        return *this;

    this->Entity = src.Entity;
    this->Type = src.Type;
    this->StartIndex = src.StartIndex;
    this->EndIndex = src.EndIndex;
    this->Score = src.Score;

    return *this;
}

