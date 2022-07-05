#include<iostream>

template <typename T> T max(T a,T b);

int main(){
    int a{20};
    int b{38};

    double c{27.6};
    double d{34.2};

    std::string e="Kunal";
    std::string f="Runal";

    auto result=max(a,b);//int type deduced
    auto result2=max(c,d);//double type deduced
    //auto result3=max(e,f);//string type deduced "string is not works properly"

    auto result4=max<double>(c,d);//explisit the function that means we want double
    auto result5=max<double>(a,c);
    //auto result6=max<double>(a,f);//gives the error bcoz string can't change into int
    std::cout<<"Max : "<<result<<std::endl;
    std::cout<<"Max : "<<result2<<std::endl;
    std::cout<<"Max : "<<result4<<std::endl;
    std::cout<<"Max : "<<result5<<std::endl;
    return 0;
}

template <typename T> T max(T a,T b){
    return (a>b)?a:b;
}