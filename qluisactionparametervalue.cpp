#include "qluisactionparametervalue.h"

QLuisActionParameterValue::QLuisActionParameterValue()
{

}

QLuisActionParameterValue::QLuisActionParameterValue(const QLuisActionParameterValue& src){

    if(&src!=this){
        *this = src;
    }
}

QLuisActionParameterValue& QLuisActionParameterValue::operator =(const QLuisActionParameterValue& src)
{
    if(&src == this)
        return *this;

    this->Entity = src.Entity;
    this->Type = src.Type;
    this->Score = src.Score;

    return *this;
}
