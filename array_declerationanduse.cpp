#include <iostream>



int main(){

    //Declare an array of ints
   // int scores [10]; // Junk data

    //Read data

   // std:: cout << " scores [0] : " << scores[0] << std::endl;
   // std:: cout << " scores [1] : " << scores[1] << std::endl;
   

    //Read with a loop
    /*
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */
  


   /*
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;
    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */


   //Write data in a loop
   /*
   for(size_t i{0}; i < 10 ; ++i){
       scores[i] = i * 10;
   }
    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */

    //Declare and initialize at the same time
    /*
	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
	}
    */
  

    //If you don't initialize all the elements, those you leave out
    //are initialized to 0
    /*
    int families[5] {10,54,5};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "families[" << i << "] : " << families[i] << std::endl;
	}
    */
    
   	//Omit the size of the array at declaration
   /*
    int class_sizes[] {13,4,57,35,5,97,34,33}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}
    */
    
   // Read only arrays
   /*
   const int birds[] {13,4,57,35,5,97,34,33}; 
   birds[2] = 8;
   we cant change the value of const array
   */

    //Sum up scores array, store result in sum
    /*
    int scores [] {2,4,3,6,5,10,7,3};
    int sum {0};
    
    for( int element : scores){
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;
    */

    /*
    int scores [] {2,67,4};
    int count { std::size(scores)}; // std::size( C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    std::cout << "count : " << count << std::endl;
    */

    /*
    int count {sizeof(scores)/sizeof(scores[0])};
    for(size_t i {0} ; i < count ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
 
   //Range based for loop
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;       
    }
    */

   /**********char array ********/
   
   //char message[]{'H','E','L','L','O','\0'};//'\0'is use for the declaring null at the end
   /*
   std::cout<<"Message : ";
   for (auto i: message){
        std::cout<<i;
   }
   std::cout<<std::endl;

   //modify the array
   message[1]='O';
   std::cout<<"Message after modifying : ";
   for (auto i: message){
        std::cout<<i;
   }
   std::cout<<std::endl;
   */

//taking a garbage value in array after the actual elements
  /*std::cout<<"Message : "<<message<<std::endl;*/
   //for removing that garbage value we are using the '\0' at the end of the array
    return 0;
}