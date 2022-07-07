#include "person.h"

person::person(){

};

person::person(std::string& first_param,std::string& second_param)
    :first_name(first_param),last_name(second_param)
{
};

std::ostream& operator<<(std::ostream& out,const person& person){
    out<<"person ["<<person.first_name<<" "<<person.last_name<<"]";
    return out;
}

person::~person(){

};