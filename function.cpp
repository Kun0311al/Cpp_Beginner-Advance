#include<iostream>
int multiplication(int First_number,int Second_number){
    int Result = First_number * Second_number;
    return Result;
}
int main(){
    int First_Num = 13;
    int Second_Num = 2;
    int Multiplication = First_Num * Second_Num;
     std::cout <<"Multiplication : "<<Multiplication<<std::endl;

    Multiplication = multiplication(13,4);
    std::cout<<"Multiplication: "<<Multiplication<<std::endl;

    Multiplication = multiplication(11,3);
    std::cout<<"Multiplication: "<<Multiplication<<std::endl; 
}
//fuction are repetadely useable .we can use the funtion n number of time..