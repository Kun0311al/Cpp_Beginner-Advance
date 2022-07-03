#include<iostream>
#include<string>

int sum(int first1, int second2){
    int result = first1+second2;
    std::cout<<"&result (inside function): "<<&result<<std::endl;
    return result;
}

std::string con_string(std::string str1,std::string str2){
    std::string result = str1 +str2;
    return result;
}
int main(){
    int result;
    int first_no{20};
    int second_no{29};
    result=sum(first_no,second_no);
    std::cout<<"&result (out of the function) : "<<&result<<std::endl;
    std::cout<<"result : "<<result<<std::endl;

    std::string result_str = con_string(std::string("Hello "),std::string("World!!"));
    std::cout<<"con_string : "<<result_str<<std::endl;
    return 0;
}