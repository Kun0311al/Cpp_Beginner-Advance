#include<iostream>
#include<cstring>//std::strlen
int main(){
    //real array and decayedinto pointer
    const char test1[]{"Hello I'm Kunal Parkar!!..Learning CPP."};
    //arrays decays into pointer when we use const char*
    const char* test2 {"Hello I'm Kunal Parkar!!..Learning CPP."};
    std::cout<<" "<<test1<<std::endl;
    //strlen ignore null charactor *total char
    std::cout<<"strlen(test1) : "<<std::strlen(test1)<<std::endl;
    //includes the null charactors *total char +1null
    std::cout<<"sizeof(test1) : "<<sizeof(test1)<<std::endl;
    //strlen still works with decayed array
    std::cout<<"strlen(test2) : "<<std::strlen(test2)<<std::endl;
    //print size of pointer
    std::cout<<"sizeof(test2) : "<<sizeof(test2)<<std::endl;

    //for comparing string 
    const char* test_value1{"Kunal"};
    const
    return 0;
}