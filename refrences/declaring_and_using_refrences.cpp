#include<iostream>
int main(){
    int int_value {33};
    double double_value{22.15};

    //refrences:add and data are the same of both  the elements
    int& ref_int_value{int_value};
    double& ref_double_value{double_value};

    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"&int_value : "<<&int_value<<std::endl;
    std::cout<<"double_value : "<<double_value<<std::endl;
    std::cout<<"&double_value : "<<&double_value<<std::endl;

    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"&ref_int_value : "<<&ref_int_value<<std::endl;
    std::cout<<"ref_double_value : "<<ref_double_value<<std::endl;
    std::cout<<"&ref_double_value : "<<&ref_double_value<<std::endl;

    //data modification by veriable name
    int_value= 10;
    double_value= 10.3;
    std::cout<<std::endl;
    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"&int_value : "<<&int_value<<std::endl;
    std::cout<<"double_value : "<<double_value<<std::endl;
    std::cout<<"&double_value : "<<&double_value<<std::endl;

    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"&ref_int_value : "<<&ref_int_value<<std::endl;
    std::cout<<"ref_double_value : "<<ref_double_value<<std::endl;
    std::cout<<"&ref_double_value : "<<&ref_double_value<<std::endl;
    //result:after changing the data the address of the variable is same throughout

    
    return 0;
}