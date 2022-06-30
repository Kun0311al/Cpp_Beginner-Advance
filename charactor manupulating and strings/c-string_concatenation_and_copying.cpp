#include<iostream>
#include<cstring>//std::strcat,std::strncat,std::strcpy
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

    //this is use to copy one array in the another array
    const char* test_value3 = "Kunal U can do it!!";
    char* test_value4 = new char[std::strlen(test_value3)+1];//+1 is use bcoz strlen not consider null pointer
    std::strcpy(test_value4,test_value3);
    std::cout<<"strlen of test_value4: "<<std::strlen(test_value4)<<std::endl;
    std::cout<<"size of test_value4: "<<sizeof(test_value4)<<std::endl;//pointer size value
    std::cout<<"test_value4 : "<<test_value4<<std::endl;

    //copy the string onto the array
    const char* source1 = "Holaa";
    char dest1[] = {'a','b','c','d','e','\0'};

    std::cout<<"dest1: "<<dest1<<std::endl;
    //copy 5 char from source1 to dest1
    std::strncpy(dest1,source1,5);
    std::cout<<"the dest1 array after copying things : "<<dest1<<std::endl; 
    
    return 0;
}