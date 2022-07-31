#include<iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b){
    T temp = b;
    b = a;
    a = temp;
}

template<class T1,class T2>
float add(T1 a , T2 b){
    float sum = (a+b)/2;
    return sum;
}

int main(){
    float a;
    a = add(2, 4.5);
    cout<<"the sum of the number is "<<a<<endl;

    int x = 3,y = 2;
    swapp(x,y);
    cout<<x<<endl<<y;

    return 0;
}