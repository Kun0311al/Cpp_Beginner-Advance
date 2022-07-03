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
    auto func = [a](){
        std::cout<<"a : "<<a<<std::endl;
    };
    for (size_t i = 0; i < 5; i++)
    {
       std::cout<<"outer a : "<<a<<std::endl;
       func();
       a++;
    }
     

    return 0;
}