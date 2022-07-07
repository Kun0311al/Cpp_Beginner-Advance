#include<iostream>

class dog{
    public:
        dog() = default;
    void print_total(){
        //function
    }
    private:
        size_t legs;
        size_t arms;
};

int main(){
    dog dog1;
    std::cout<<"size of (size_t) : "<<sizeof(size_t)<<std::endl;
    std::cout<<"size of (dog) : "<<sizeof(dog)<<std::endl;//it shows the total size of the object i.e.size_t legs
                                                            //size_t arms and functions are not count in it
    return 0;
}