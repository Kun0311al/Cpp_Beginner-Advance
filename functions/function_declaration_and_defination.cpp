#include<iostream>
//function declaration,prototype
//signature doesn't include return type
int max(int a,int b);
int min(int a,int b);

int main(){
    int a{},b{};
    std::cout<<"enter two integer no.: "<<std::endl;
    std::cin>>a>>b;
    int result = max(a,b);
    std::cout<<"max no.: "<<result<<std::endl;
    result = min(a,b);
    std::cout<<"min no.: "<<result<<std::endl;
    return 0;
}

//function defination and intiallization
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}

int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}