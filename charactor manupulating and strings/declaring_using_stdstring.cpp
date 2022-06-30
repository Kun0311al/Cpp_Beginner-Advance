#include<iostream>
#include<string>
int main(){
    std::string full_message;//empty string
    std::string new_message{"Hello and learn CPP."};//initiallize a string with the string value
    std::string link_message{new_message};//initallize with other existing string
    std::string message{"Hello kunal",5};//initiallize a part of string vith value
    std::string weird_message{2,'K'};//we get symbol at the place on no.
    std::string weird_message2(4,'K');//initiallize multiple copies of char
    std::string wish_message{"Good Morning"};//
    std::string new_sort_message{wish_message,5,7};//initiallize the part of the existing string 5is index,7is char after that

    std::cout<<"full_message: "<<full_message<<std::endl;
    std::cout<<"new_message: "<<new_message<<std::endl;
    std::cout<<"link_message: "<<link_message<<std::endl;
    std::cout<<"message: "<<message<<std::endl;
    std::cout<<"weird_message: "<<weird_message<<std::endl;
    std::cout<<"weird_message2: "<<weird_message2<<std::endl;
    std::cout<<"wish_message: "<<wish_message<<std::endl;
    std::cout<<"new_sort_message: "<<new_sort_message<<std::endl;

    //changing std::string at runtime
    new_message= "std::cout<<weird_message:<<weird_message<<std::endl;";
    std::cout<<"new_message: "<<new_message<<std::endl;

    //use a raw array
    const char* planet = "try some thing new";
    planet = "try some thing new try some thing new";
    std::cout<<"planet: "<<planet<<std::endl;
    //if u r use this the space is allocated by * it will scraped
    return 0;
}