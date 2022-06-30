#include<iostream>
#include<cstring>//std::strlen,std::strcmp,std::strncmp
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
    const char* test_value1{"Zunal"};
    const char* test_value2{"Runal"};

    char test_value3[]{"Kunal"};
    char test_value4[]{"Runal"};

    std::cout<<"std::strcmp( "<<test_value1<<","<<test_value2<<" ) : "<<std::strcmp(test_value1,test_value2)
    <<std::endl;//Z comes after the R so we get +1

    std::cout<<"std::strcmp( "<<test_value3<<","<<test_value4<<" ) : "<<std::strcmp(test_value3,test_value4)
    <<std::endl;//K comes before the R so we get -1

    test_value1="Runat";//we can change the value of pointer but can't change the value of array
    test_value2="Runal";//we can change the value of pointer but can't change the value of array

    std::cout<<"std::strcmp( "<<test_value1<<","<<test_value2<<" ) : "<<std::strcmp(test_value1,test_value2)
    <<std::endl;

//tell the funtion however char to compare  using std::strncmp
//this method only compare the given no of variable in string and give the answer
    size_t n{3};
    std::cout<<"std::strncmp : "<<std::endl;
    std::cout<<"std::strncmp( "<<test_value1<<","<<test_value2<<","<<n<<" ) : "<<std::strncmp(test_value1,test_value2,n)
    <<std::endl;

    test_value1="Kunal";
    test_value2="Kunat";
    n=5;
    std::cout<<"std::strcmp( "<<test_value1<<","<<test_value2<<","<<n<<" ) : "<<std::strncmp(test_value1,test_value2,n)
    <<std::endl;
    return 0;
}