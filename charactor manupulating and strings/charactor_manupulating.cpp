#include<iostream>
int main(){
    //this code is for getting alphanumeric value
    std::cout<<"isalnum : "<<std::endl;
    std::cout<<"C is alphanumaric : "<<std::isalnum('C')<<std::endl;
    std::cout<<"^ is alphanumaric : "<<std::isalnum('^')<<std::endl;

    char test_value{'*'};
    if (std::isalnum(test_value)){
        std::cout<<"this is a alpha numeric char";
    }else{
        std::cout<<"this id not alphanumeric"<<std::endl;
    }

    //this code is to find alphabetic value
    std::cout<<std::endl;
    std::cout<<"C is alphabetic : "<<std::isalpha('C')<<std::endl;
    std::cout<<"^ is alphabetic : "<<std::isalpha('^')<<std::endl;
    std::cout<<"* is alphabetic : "<<std::isalpha('*')<<std::endl; 
    return 0;
}