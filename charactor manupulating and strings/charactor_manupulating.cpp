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
//if the result is true then it will gives u a value diff from zero
    char test_value1{'e'};
    if (std::isalnum(test_value1)){
        std::cout<<"this is a alphabetic char";
    }else{
        std::cout<<"this id not alphabetic"<<std::endl;
    } 

    //this use for the blank char
    char test_value2[]{"Hello I am Kunal Parkar!!.I am a C++ Learner.."};
    std::cout<<"Message for test: "<<test_value2<<std::endl;
    int blank_char{};

    for (size_t i = 0; i < std::size(test_value2); i++){
        if (std::isblank(test_value2[i])){
            std::cout<<"found a blank char at index: "<<i<<std::endl;
            blank_char++;
        }
        
    }
    std::cout<<"Total Blank char : "<<blank_char<<std::endl;

    //this code is to find the apper and lower case char
    int lower_char{};
    int upper_char{};

    for (auto charactar:test_value2){
        if (std::isupper(charactar)){
            std::cout<<" "<<charactar;
            upper_char++;
        }else if (std::islower(charactar)){
            std::cout<<" "<<charactar;
            lower_char++;
        }
        
    }
    std::cout<<std::endl;
    std::cout<<"Total upper char : "<<upper_char<<std::endl;
    std::cout<<"Total lower char : "<<lower_char<<std::endl;
    return 0;
}