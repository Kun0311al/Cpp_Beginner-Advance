#include<iostream>

void say_hello(int age){
    ++age;
    std::cout<<"your age is "<<age<<"&age : "<<&age<<std::endl;
}

int main(){
    int age{18};//local
    std::cout<<"age : "<<age<<"&age : "<<&age<<std::endl;
    say_hello(age);//argument
    std::cout<<"age : "<<age<<"&age : "<<&age<<std::endl;
    return 0;
}