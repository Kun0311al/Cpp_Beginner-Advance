#include<iostream>
using namespace std;

template<class T1,class T2>
float add(T1 a , T2 b){
    float sum = (a+b)/2;
    return sum;
}

int main(){
    float a;
    a = add(2, 4.5);
    cout<<"the sum of the number is "<<a<<endl;

    return 0;
}