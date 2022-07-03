#include<iostream>
#include<string>

void max_string(std::string input1,std::string input2,std::string& output){
    if (input1>input2)
    {
        output = input1;
    }else{
        output = input2;
    }//some thing is fult in this function
}

void max_int(int input1,int input2,int& output){
    if (input1>input2)
    {
        output = input1;
    }else{
        output = input2;
    }  
}

void max_pointer_int(int input1,int input2,int* output){
    if (input1>input2)
    {
        *output = input1;
    }else{
        *output = input2;
    }
}

int main(){
    std::string out_str;
    std::string in_str1("Balabamc");
    std::string in_str2("Balabama");
    max_string(in_str1,in_str2,out_str);
    std::cout<<"max string : "<<out_str<<std::endl;

    int out_str2;
    int inputint1{23};
    int inputint2{200};
    max_int(inputint1,inputint2,out_str2);
    std::cout<<"max int : "<<out_str2<<std::endl;

    int out_str3;
    int inputint3{30};
    int inputint4{53};
    max_pointer_int(inputint3,inputint4,&out_str3);
    std::cout<<"max int : "<<out_str3<<std::endl;
    return 0;
}