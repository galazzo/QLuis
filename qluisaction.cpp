#include "qluisaction.h"

QLuisAction::QLuisAction()
{

}

QLuisAction::QLuisAction(const QLuisAction& src){

    if(&src!=this){
        *this = src;
    }
}

QLuisAction& QLuisAction::operator =(const QLuisAction& src)
{
    if(&src == this)
        return *this;

    this->Triggered = src.Triggered;
    this->Name = src.Name;
    this->Parameters = src.Parameters;

    return *this;
}
