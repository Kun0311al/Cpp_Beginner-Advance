#include<iostream>
/*by changing the parameters u can do the function overloading
you can also pass the different type of value i.e int max(int a,doubleb)<<this is legle in the cpp.*/
int max(int a,int b){
    return (a>b)?a:b;
}

int max(int a,double b){
    return (a>b)?a:b;
}

int max(double a,int b){
    return (a>b)?a:b;
}

double max(double a,double b){
    return (a>b)?a:b;
}

std::string max(std::string a,std::string b){
    return (a>b)?a:b;//this condition is set the string in ascending order
}
int main(){
    int int_1{20};
    int int_2{30};

    double double_1{20.3};
    double double_2{19.3};
    
    std::string_view str1 = "Kunal";
    std::string_view str2 = "Parkar";

    std::cout<<"Max : "<<max(int_1,int_2)<<std::endl;
    std::cout<<"Max : "<<max(double_1,double_2)<<std::endl;
    std::cout<<"Max : "<<max(str1,str2)<<std::endl;
    std::cout<<"Max : "<<max(int_1,double_1)<<std::endl;
    std::cout<<"Max : "<<max(double_2,int_1)<<std::endl;
    return 0;
}