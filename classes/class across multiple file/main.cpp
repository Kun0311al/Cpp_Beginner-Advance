#include<iostream>
#include"constant.h"
#include"class_cylinder.h"


int main(){
    cylinder cylinder1;
    std::cout<<"volume of cylinder1 : "<<cylinder1.volume()<<std::endl;
    //now u also get the value of the private parameters

    cylinder cylinder2(10,3);
    std::cout<<"volume of cylinder2 : "<<cylinder2.volume()<<std::endl;

    return 0;
}