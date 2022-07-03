/*in this type we can accrss the value which is initialize out of the function without passing the value
*/
#include<iostream>
int main(){
    int a{30};
    int b{45};

    //taking the a,b from outer declaration
    [a,b](){
        std::cout<<"sum : "<<a+b<<std::endl;
    }();

    //check the incrementation of outer value also increse the inner value
    //prove:inter nd outer are both are different thing
    //inside the lambda function is the only copy of the outer
    auto func = [a](){
        std::cout<<"a : "<<a<<std::endl;
    };
    for (size_t i = 0; i < 5; i++)
    {
       std::cout<<"outer a : "<<a<<std::endl;
       func();
       a++;
    }

    //if we pass the address of the variable the the inner and outer veriable are link together
    //then if we change the external veriable the inter will also change
    auto func2 = [&a](){
        std::cout<<"a : "<<a<<std::endl;
    };
    for (size_t i = 0; i < 5; i++)
    {
       std::cout<<"outer a : "<<a<<std::endl;
       func2();
       a++;
    }
     

    return 0;
}