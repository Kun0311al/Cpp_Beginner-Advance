#include <iostream>
int main(){

	int number1 {55};
    int number2 {60};
    bool result = (number1 < number2);//result comes in boolean form
    //if statement	
	/*std::cout << std::boolalpha << "result : " << result << std::endl; 	
	std::cout << std::endl;
	std::cout << "free standing if statement" << std::endl;   
    //if(result)
	if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }    
    //if(!result){
	if(!(result == true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }*/

    //if else statement
    /*std::cout << std::endl;
	std::cout << "using the else : " << std::endl;	
	if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }*/

    //direct condition is apply in the if condition
    /*std::cout << std::endl;
	std::cout << "Using expression as condition : " << std::endl;
	if(number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }*/

    //Nested if statement
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_catch{true};
     if(red){
         std::cout << "Stop" << std::endl;
     }
     if(yellow){
         std::cout << "Slow down" << std::endl;
     }
	 if(green){
		 std::cout << "Go" << std::endl;
	 }
}