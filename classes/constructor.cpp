#include<iostream>

const double pi{3.1415926535897932384626433832795};

class cylinder{
    public:
        //constructor which is not taking any parameters
        cylinder(){
            cyli_radius = 2.0;
            cyli_height = 2.0;
        }
        //function
        double volume(){
            return pi*cyli_radius*cyli_radius*cyli_height;
        }
    private:
        //member veriable
        double cyli_radius {1.0};
        double cyli_height {1.0};
};

int main(){
    cylinder cylinder1;
    std::cout<<"volume of cylinder1 : "<<cylinder1.volume()<<std::endl;

    return 0;
}