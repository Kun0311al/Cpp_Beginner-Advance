#include<iostream>
#include<string>

/*template function is the blue print of the function in this syntes template is the function
type name T is auto detect the input value type i.e. int,double,string,long,double.......
imp::this is not a cpp code this is just a blueprint*/

//declaration of the template function
template <typename T> T max(T a,T b);

int main(){
    int a{20};
    int b{38};

    double c{27.6};
    double d{34.2};

    std::string e="Kunal";
    std::string f="Runal";

    std::cout<<"Max : "<<max(a,b)<<std::endl;
    std::cout<<"Max : "<<max(c,d)<<std::endl;
    //std::cout<<"Max : "<<max(e,f)<<std::endl;

    return 0;
}

template <typename T> T max(T a,T b){
    return (a>b)?a:b;
}