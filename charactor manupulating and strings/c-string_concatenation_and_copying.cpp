#include<iostream>
#include<cstring>//std::strcat
int main(){
    //for concantenation our string it use to combine to array or array with string
    std::cout<<"std::strcat :"<<std::endl;
    char test1[20]{"HEllo "};
    char test2[10]{"Kunal"};
    std::strcat(test1,test2);
    std::cout<<"concatenation array: "<<test1<<std::endl;
    std::strcat(test1," How are you??");
    std::cout<<"concatenation array: "<<test1<<std::endl;
    return 0;
}