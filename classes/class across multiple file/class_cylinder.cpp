#include"class_cylinder.h"

cylinder::cylinder(double rad_param,double height_param){
            cyli_radius = rad_param;
            cyli_height = height_param;
        }

//we can also seprate the function in the class like this
/*
cylinder::double volume(){
            return pi*cyli_radius*cyli_radius*cyli_height;
        }*/