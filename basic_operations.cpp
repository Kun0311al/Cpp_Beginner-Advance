#include<iostream>
int main(){
    int num_1 = 5;
    int num_2 {2};
    int Result;
    Result = num_1 + num_2;
    int Result1 = num_1 - num_2;
    int Result2 = num_1 * num_2;
    int Result3 = num_1 / num_2;
    int Result4 = num_1 % num_2;
    std::cout<<"result: "<<Result<<std::endl;
    std::cout<<"result1: "<<Result1<<std::endl;
    std::cout<<"result2: "<<Result2<<std::endl;
    std::cout<<"result3: "<<Result3<<std::endl;
    std::cout<<"result4: "<<Result4<<std::endl;
}