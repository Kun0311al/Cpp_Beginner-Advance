/*method to read and modifiy member veriable of class*/
#include<iostream>

const double pi{3.1415926535897932384626433832795};

class cylinder{
    private:
        //member veriable
        double cyli_radius {1.0};
        double cyli_height {1.0};
    public:
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

        //function
        double volume(){
            return pi*cyli_radius*cyli_radius*cyli_height;
        }
};

int main(){
    cylinder cylinder1;
    std::cout<<"volume of cylinder1 : "<<cylinder1.volume()<<std::endl;
    //now u also get the value of the private parameters
    std::cout<<"cylinder radius : "<<cylinder1.Get_cyli_radius()<<std::endl;

    cylinder cylinder2;
    cylinder2.Set_cyli_radius(10);
    cylinder2.Set_cyli_height(3);
    std::cout<<"volume of cylinder2 : "<<cylinder2.volume()<<std::endl;

    return 0;
}