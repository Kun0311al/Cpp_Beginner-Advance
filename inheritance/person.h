#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>

class person{
    friend std::ostream& operator<<(std::ostream& out,const person& person);

    public:
        person();
        person(std::string& first_param,std::string& second_param);
        ~person();

        //getter
        std::string get_first_name(){
            return first_name;
        }
        std::string get_last_name(){
            return last_name;
        }
    private:
        std::string first_name = "Kunal";
        std::string last_name = "Parkar";
};

#endif