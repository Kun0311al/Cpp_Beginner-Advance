#include<iostream>
int main(){
    int num_1 = 5;
    int num_2 {2};
    int Result;
    //normal arithmatic operation
    Result = num_1 + num_2;
    int Result1 = num_1 - num_2;
    int Result2 = num_1 * num_2;
    int Result3 = num_1 / num_2;
    int Result4 = num_1 % num_2;
    //increment and decrement operator
    int Result5 = num_1++;
    int Result6 = num_2--;
    int Result7 = --num_1;
    int Result8 = ++num_2;
    //compound operator
    int value = 35;
    value += 2;
    std::cout<<"result +=: "<<value<<std::endl;
    value -= 2;
    std::cout<<"result -=: "<<value<<std::endl;
    value *= 2;
    std::cout<<"result *=: "<<value<<std::endl;
    value /= 2;
    std::cout<<"result /=: "<<value<<std::endl;
    value %= 2;
    std::cout<<"result %=: "<<value<<std::endl;
    //Results
    std::cout<<"result add: "<<Result<<std::endl;
    std::cout<<"result1 sub: "<<Result1<<std::endl;
    std::cout<<"result2 multiplication: "<<Result2<<std::endl;
    std::cout<<"result3 division: "<<Result3<<std::endl;
    std::cout<<"result4 modulus: "<<Result4<<std::endl;
    std::cout<<"result5 display then increment: "<<Result5<<std::endl;
    std::cout<<"result6 display and the decrement: "<<Result6<<std::endl;
    std::cout<<"result7 increment and display: "<<Result7<<std::endl;
    std::cout<<"result8 decrement and display: "<<Result8<<std::endl;
}