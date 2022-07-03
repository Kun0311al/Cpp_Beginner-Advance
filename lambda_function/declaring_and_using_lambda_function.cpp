/*we can also give the name for calling that function and we 
also call that function without givint the name to it 
syntex is lambda function signature:
                                [capture list](//parameters)->return type{   
                                    //function body   
                                };*/
#include<iostream>
int main(){
    //calling the function without a name
    [](){
        std::cout<<"Hello world!!"<<std::endl;
    }();

    //function calling by using the name
    auto func = [](){
        std::cout<<"Hello world!!,Kunal parkar"<<std::endl;
    };

    func();
    return 0;
}