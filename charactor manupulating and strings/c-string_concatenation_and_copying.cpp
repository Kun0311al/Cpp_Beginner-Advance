#include<iostream>
#include<cstring>//std::strcat
int main(){
    //for concantenation our string it use to combine to array or array with string
    std::cout<<"std::strcat :"<<std::endl;
    char test1[50]{"HEllo "};
    char test2[10]{"Kunal"};
    std::strcat(test1,test2);
    std::cout<<"concatenation array: "<<test1<<std::endl;
    std::strcat(test1," How are you??");
    std::cout<<"concatenation array: "<<test1<<std::endl;

    //concamtenation of two dynamic array and check the length
    char* test_value1 = new char[100]{'H','E','L','L','O','\0'};
    char* test_value2=
                    new char[50]{' ','K','U','N','A','L',' ','U',' ','C','A','N',' ','D','O',' ','I','T','\0'};
    std::cout<<"strlen of test_value1 : "<<std::strlen(test_value1)<<std::endl;
    std::cout<<"strlen of test_value2 : "<<std::strlen(test_value2)<<std::endl;

    std::strcat(test_value1,test_value2);
    std::cout<<"New test_value1 :"<<test_value1<<std::endl;
    std::cout<<"strlen of new test_value1 : "<<std::strlen(test_value1)<<std::endl;

    //only given no. of char in the array will combine with the other array
    char test3[20] = "Kunal";
    char test4[30] = " Work smart not fool!!";
    std::cout<<std::strncat(test3,test4,11)<<std::endl;
    std::cout<<"test3 cincatenating array : "<<std::strncat(test3,test4,11)<<std::endl;
    
    return 0;
}