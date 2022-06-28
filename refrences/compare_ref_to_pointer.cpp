#include<iostream>
int main(){
    int int_value{10};
    int& ref_int_value{int_value};
    int* p_int_value{&int_value};

    //reading the data in it
    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"p_int_value : "<<p_int_value<<std::endl;
    std::cout<<"*p_int_value : "<<*p_int_value<<std::endl;  

    //writing througe the pointer
    *p_int_value= 20;

    //check the result after modification
    std::cout<<std::endl;
    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"p_int_value : "<<p_int_value<<std::endl;
    std::cout<<"*p_int_value : "<<*p_int_value<<std::endl;
}