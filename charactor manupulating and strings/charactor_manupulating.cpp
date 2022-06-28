#include<iostream>
int main(){
    std::cout<<"isalnum : "<<std::endl;
    std::cout<<"C is alphanumaric : "<<std::isalnum('C')<<std::endl;
    std::cout<<"^ is alphanumaric : "<<std::isalnum('^')<<std::endl;

    char test_value{'*'};
    if (std::isalnum(test_value)){
        std::cout<<"this is a alpha numeric char";
    }else{
        std::cout<<"this id not alphanumeric"<<std::endl;
    }
    return 0;
}