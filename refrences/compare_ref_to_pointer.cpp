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

    //writing through the refrence
    ref_int_value= 30;

    std::cout<<std::endl;
    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"p_int_value : "<<p_int_value<<std::endl;
    std::cout<<"*p_int_value : "<<*p_int_value<<std::endl;
    //result:we can change the value by using the both the types ref and pointer bt ref is easy

    int some_other_value{40};
    ref_int_value=some_other_value;
    std::cout<<std::endl;
    std::cout<<"making the ref refrence towords the other address: "<<std::endl;
    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"p_int_value : "<<p_int_value<<std::endl;
    std::cout<<"*p_int_value : "<<*p_int_value<<std::endl;
    //result:we cant change the ref to refrence towads other directly for that u have to change the initialization

    //making pointer point something else
    p_int_value = &some_other_value;
    std::cout<<std::endl;
    std::cout<<"making the pointer points towords the other address: "<<std::endl;
    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"&int_value :"<<&int_value<<std::endl;
    std::cout<<"&ref_int_value : "<<&ref_int_value<<std::endl;
    std::cout<<"p_int_value : "<<p_int_value<<std::endl;
    std::cout<<"*p_int_value : "<<*p_int_value<<std::endl;
    //result:pointer change the value and change the address also 

    //change the data through the pointer
    *p_int_value = 55;
    std::cout<<std::endl;
    std::cout<<"change the data through pointer: "<<std::endl;
    std::cout<<"int_value : "<<int_value<<std::endl;
    std::cout<<"ref_int_value : "<<ref_int_value<<std::endl;
    std::cout<<"&int_value :"<<&int_value<<std::endl;
    std::cout<<"&ref_int_value : "<<&ref_int_value<<std::endl;
    std::cout<<"p_int_value : "<<p_int_value<<std::endl;
    std::cout<<"*p_int_value : "<<*p_int_value<<std::endl;
    /*result:the original variable address and the value still be the same but the value of pointer and
    the address of the pointer has change bcoz of the ref and the original value lives in the different 
    address */
}