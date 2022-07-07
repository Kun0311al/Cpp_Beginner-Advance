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

        //getter
        //this os use to get the private member to outside the class
        double Get_cyli_radius(){
            return cyli_radius;
        }
        double Get_cyli_height(){
            return cyli_height;
        }

        //setter
        //this is use to change the private member value from the outside
        void Set_cyli_radius(double rad_param){
            cyli_radius = rad_param;
        }
        void Set_cyli_height(double height_param){
            cyli_height = height_param;
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


    //create a new veriable which is store on heap
    cylinder* ptr_cylinder2 = new cylinder(24,7);//pass the constructor parameter in ptr

    std::cout<<"colume2 : "<<ptr_cylinder2->volume()<<std::endl;
    std::cout<<"radius of cylinder2 : "<<ptr_cylinder2->Get_cyli_radius()<<std::endl;

    delete ptr_cylinder2;
    return 0;
}