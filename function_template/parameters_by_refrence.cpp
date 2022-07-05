#include<iostream>

//template <typename T> T max(T a,T b);
template <typename T> T& max(T& a,T& b);

int main(){
    double c{27.6};
    double d{34.2};

    
    std::cout<<"out-&a"<<&c<<std::endl;
    auto result2=max(c,d);//double type deduced
    
    std::cout<<"Max : "<<result2<<std::endl;
    std::cout<<"out-&a"<<&c<<std::endl;
    return 0;
}

template <typename T> T& max(T& a,T& b){//call the function parameter by refrence
    std::cout<<"in-&a"<<&a<<std::endl;
    return (a>b)?a:b;
}