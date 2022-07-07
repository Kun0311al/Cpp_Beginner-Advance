//members of the struct are public by default
//member of the class are private by default
#include<iostream>

class dog{
    std::string D_name;
};

struct cat{
    std::string D_name;
};

struct point{
    double x;
    double y;
};

void print_point(const point& point){
    std::cout<<"[x: "<<point.x<<" y: "<<point.y<<"]"<<std::endl;
}


int main(){
    dog dog1;
    cat cat1;

    //dog1.Dname = "Tuffy";//compiler error
    cat1.D_name = "Manni";
    std::cout<<cat1.D_name<<std::endl;

    point p1;
    p1.x = 10;
    p1.y = 38.2;
    print_point(p1);

    return 0;
}