#include<iostream>
int main(){
    //declaring and initialize the pointer
    int *p_var1 {};//this is null ptr

    int int_var{10};
    int *p_var{&int_var};
    std::cout<<"int_var : "<<int_var<<std::endl;
    std::cout<<"p_var (address of int_var) : "<<p_var<<std::endl;
    int int_var1{35};
    p_var=&int_var1;
    std::cout<<"p_var (address of int_var) : "<<p_var<<std::endl;
    //pointer is stores the address of the element

    //derefrencing a pointer
    //it gives u the value which is store at that adderess
    int *p_var2 {nullptr};
    int int_var2{10};
    p_var2 = &int_var2;
    std::cout<<"value : "<<*p_var2<<std::endl;
}