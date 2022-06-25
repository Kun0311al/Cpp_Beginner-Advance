#include<iostream>
int main(){
    //to print i love you 10 times
    /*
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    std::cout<<"I love you"<<std::endl;
    */

   //for loop: use for the same
   //insteed of unsigned int we can also use "size_t" in for loop size_t takes the no. positive only
   /*the declared things in the for loops are anly works in the for loop they are not 
   useful for whole program*/
   for(unsigned int j{0};j<10;j++){
    std::cout<<"I love you"<<std::endl;
   }
}