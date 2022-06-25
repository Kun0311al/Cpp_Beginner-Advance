#include<iostream>
int main(){
    //here also u can use size_t insteed of unsigned int 
    //in this loop the condition is check first and then the code run and increment the pointer by 1
    const unsigned int count {10};
    unsigned int i{0};
    while (i<count){
        std::cout<<i<<" : i love you"<<std::endl;
        i++;
    }
    
}