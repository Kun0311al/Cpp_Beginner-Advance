#include <iostream>
int main(){
    int max{};
    
    int a{28};
    int b{20};
	
    std::cout << std::endl;
	std::cout << "Using ternary " << std::endl;
	
    /*
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */

    max = (a > b)? a : b; // Ternary operator
    std::cout << "max : " << max << std::endl;  
    return 0;
}