#ifndef CYLINDER_H  //these are the guard to dont overwrite the code while executing
#define CYLINDER_H  //these are the guard to dont overwrite the code while executing 

class cylinder{
    public:
        //constructor which is not taking any parameters
        cylinder(){
            cyli_radius = 2.0;
            cyli_height = 2.0;
        }
        //constructor which is taking parameters
        cylinder(double rad_param,double height_param);
        /*cylinder(double rad_param,double height_param){
            cyli_radius = rad_param;
            cyli_height = height_param;
        }*///we can use this functio like this also bt for thid time we shif it in another cpp file

        //function
        double volume(){
            return pi*cyli_radius*cyli_radius*cyli_height;
        }
    private:
        //member veriable
        double cyli_radius {1.0};
        double cyli_height {1.0};
};

#endif  //these are the guard to dont overwrite the code while executing