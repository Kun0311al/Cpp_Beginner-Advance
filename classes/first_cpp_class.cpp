#include<iostream>

const double pi{3.1415926535897932384626433832795};

//class declaration
class cylinder{
    // private://in this class the function are only accessible to this class only 
    //     //member class
    //     double radius{};
    //     double height{};
    public:
        double radius{};
        double height{};
    public:
        //function
        double volume(){
            return pi*radius*radius*height;
        }
};

int main(){

    //we add the element in the class
    cylinder cylinder1;//first object
    std::cout<<"volume : "<<cylinder1.volume()<<std::endl;

    //change the member veriable
    cylinder1.radius = 20;
    cylinder1.height = 5;
    std::cout<<"volume : "<<cylinder1.volume()<<std::endl;
    
    cylinder1.height = 2;
    std::cout<<"volume : "<<cylinder1.volume()<<std::endl;

    cylinder cylinder2;
    cylinder2.radius =10;
    cylinder2.height = 2;
    std::cout<<"volume : "<<cylinder2.volume()<<std::endl;
    return 0;
}