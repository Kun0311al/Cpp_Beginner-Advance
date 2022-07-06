#include"class_cylinder.h"

cylinder::cylinder(double rad_param,double height_param){
            cyli_radius = rad_param;
            cyli_height = height_param;
        }

//we can also seprate the function in the class like this
/*
double cylinder::volume(){
            return pi*cyli_radius*cyli_radius*cyli_height;
        }*/

//we can also seprate the setter and getter in the class like this
/*
double cylinder::Get_cyli_radius(){
    return cyli_radius;
}
double cylinder::Get_cyli_height(){
    return cyli_height;
}

//setter
//this is use to change the private member value from the outside
void cylinder::Set_cyli_radius(double rad_param){
    cyli_radius = rad_param;
}
void cylinder::Set_cyli_height(double height_param){
    cyli_height = height_param;
}*/