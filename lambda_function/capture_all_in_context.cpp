/*in this we can access every thing which out side of the lambda function
if u want to capture all by value then just put = in []bracket
if u want to capture all by refrence then just put & in []bracket*/
#include<iostream>

int main(){
    int a{40};
    int b{38};

    //capture all by value
    auto func = [=](){
        std::cout<<"value of a by value : "<<a<<std::endl;
    };
    func();

    //capture all by refrence
    auto func2 = [&](){
        std::cout<<"inner a : "<<a<<std::endl;
        std::cout<<"inner b : "<<b<<std::endl;
    };
    for (size_t i = 0; i < 5; i++)
    {
       std::cout<<"outer a : "<<a<<std::endl;
       std::cout<<"outer b : "<<b<<std::endl;
       func2();
       a++;
    }
    return 0;
}