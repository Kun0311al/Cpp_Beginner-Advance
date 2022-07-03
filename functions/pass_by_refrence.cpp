#include<iostream>
void say_age(int& age){
    ++(age);
    std::cout<<"your age is : "<<age<<" &age : "<<&age<<std::endl;
}
int main(){
    int age{30};
    std::cout<<"age (before call) : "<<age<<" &age : "<<&age<<std::endl;
    say_age(age);
    std::cout<<"age (after call) : "<<age<<" &age : "<<&age<<std::endl;
    return 0;
}
/*if we use the pass by refrence 
then in this case we pass the actual valriable to the function
function just copy the refrenceof that value and the perform the activity on the actual 
variable only so the function run on the same variable address */