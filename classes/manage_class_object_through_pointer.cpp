#include<iostream>

const double pi{3.1415926535897932384626433832795};

class cylinder{
    public:
        //constructor which is not taking any parameters
        cylinder(){
            cyli_radius = 2.0;
            cyli_height = 2.0;
        }
        //constructor which is taking parameters
        cylinder(double rad_param,double height_param){
            cyli_radius = rad_param;
            cyli_height = height_param;
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
    cylinder cylinder1(20,4);
    cylinder1.volume();

    //set a pointer
    cylinder* ptr_cylinder = &cylinder1;

    //std::cout<<"volume : "<<ptr_cylinder.volume()<<std::endl;//this will git error
    std::cout<<"volume: "<<(*ptr_cylinder).volume()<<std::endl;
    std::cout<<"volume : "<<ptr_cylinder->volume()<<std::endl;//->this symbol shows the take value from pointer

    return 0;

}