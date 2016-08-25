#include "qluisresult.h"

QLuisResult::QLuisResult()
{

}

QLuisResult::QLuisResult(const QLuisResult& src){

    if(&src!=this){
        *this = src;
    }
}

QLuisResult& QLuisResult::operator =(const QLuisResult& src)
{
    if(&src == this)
        return *this;

    this->Query = src.Query;
    this->Intents = src.Intents;
    this->Entities = src.Entities;

    return *this;
}
