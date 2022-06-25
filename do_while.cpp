/*in do while loop the specification is this code first run and then check the condition 
first all the code run and then the test will check*/
#include<iostream>
int main(){
    const int count {10};
    size_t i{0};
    do{
      std::cout<<"I love you"<<std::endl;
      i++;  
    } while (i<count);
    
}