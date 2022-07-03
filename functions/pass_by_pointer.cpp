#include<iostream>
void say_age(int* age){
    ++(*age);
    std::cout<<"your age is : "<<*age<<" &age : "<<&age<<std::endl;
}
int main(){
    int age{30};
    std::cout<<"age (before call) : "<<age<<" &age : "<<&age<<std::endl;
    say_age(&age);
    std::cout<<"age (after call) : "<<age<<" &age : "<<&age<<std::endl;
    return 0;
}