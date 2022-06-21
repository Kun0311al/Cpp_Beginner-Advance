#include<iostream>
#include<string>
int main(){
    //Printing data
    std::cout<<"this is for input and output"<<std::endl;

    //in this time the output is getting from the declaring veriable
    int age{19};
    std::cout<< "my age is:"<<age<<std::endl;

    //this use to showcase error message
    std::cerr<<"Error:something is wrong"<<std::endl;

    //this is use to showcase log message
    std::clog<<"log message: something happen"<<std::endl;

    //this is taking input from user and give the output
    int age1;
    std::string name;

    std::cout<<"Enter your name and the age "<<std::endl;
    std::getline(std::cin,name);//this line use to get a full line as a sstring eg:Kunal suntosh parkar
    std::cin>>name;//this line just take a one word
    std::cin>>age1;
    //also write as std::cin>>name>>age1;

    std::cout<<"Your name is "<<name<<" and your age is "<<age1<<std::endl;
    return 0;

}