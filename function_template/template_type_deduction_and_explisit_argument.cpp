#include<iostream>

template <typename T> T max(T a,T b);

int main(){
    int a{20};
    int b{38};

    double c{27.6};
    double d{34.2};

    std::string e="Kunal";
    std::string f="Runal";

    max(a,b);//int type deduced
    max(c,d);//double type deduced
    //max(e,f);//string type deduced "string is not works properly"

    max<double>(c,d);//explisit the function that means we want double
    max<double>(a,c);
    //max<double>(a,f);//gives the error bcoz string can't change into int
    return 0;
}

template <typename T> T max(T a,T b){
    return (a>b)?a:b;
}