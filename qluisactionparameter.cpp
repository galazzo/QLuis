#include "qluisactionparameter.h"

QLuisActionParameter::QLuisActionParameter()
{

}

QLuisActionParameter::QLuisActionParameter(const QLuisActionParameter& src){

    if(&src!=this){
        *this = src;
    }
}

QLuisActionParameter& QLuisActionParameter::operator =(const QLuisActionParameter& src)
{
    if(&src == this)
        return *this;

    this->Name = src.Name;
    this->Required = src.Required;
    this->Value = src.Value;

    return *this;
}
