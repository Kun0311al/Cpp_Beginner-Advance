#include<iostream>
//function declaration
int max(int a,int b);

int main(){
    int a{},b{};
    std::cout<<"enter two integer no.: "<<std::endl;
    std::cin>>a>>b;
    int result = max(a,b);
    std::cout<<"max no.: "<<result<<std::endl;
    return 0;
}

//function defination and intiallization
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}