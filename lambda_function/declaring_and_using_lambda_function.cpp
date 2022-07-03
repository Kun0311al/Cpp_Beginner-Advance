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

    [](int a,int b){
        std::cout<<"a+b : "<<(a+b)<<std::endl;
    }(3,5);//we are passing the value at the time of calling

    //giving the name and call it multiple time
    auto func2 = [](int a,int b){
        std::cout<<"a+b : "<<(a+b)<<std::endl;
    };

    func2(2,5);
    func2(14,36);

    return 0;
}