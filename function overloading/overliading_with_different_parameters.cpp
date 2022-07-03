#include<iostream>

int max(int a,int b){
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
    return 0;
}