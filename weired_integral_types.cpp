#include <iostream>


int main(){
	short int var1 {10}; // 2 bytes
	short int var2 {20};
	char var3 {30}; //1 bytes
	char var4 {40};
	std::cout << "size of var1 : " << sizeof(var1) << std::endl;
	std::cout << "size of var2 : " << sizeof(var2) << std::endl;
	std::cout << "size of var3 : " << sizeof(var3) << std::endl;
	std::cout << "size of var4 : " << sizeof(var4) << std::endl;
	auto result1 = var1 + var2 ;  //auto is use bcoz we dont know the data type after execution
	auto result2 = var3 + var4;  //auto is use bcoz we dont know the data type after execution
	std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4 bytes and bothe are comes under int
	std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4 bytes and bothe are comes under int
    return 0;
}