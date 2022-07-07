#include<iostream>

class dog{
    public:
        dog() = default;
    private:
        size_t legs;
};

int main(){
    dog dog1;
    std::cout<<"size of (size_t) : "<<sizeof(size_t)<<std::endl;
    std::cout<<"size of (dog) : "<<sizeof(dog)<<std::endl;//it shows the total size of the object i.e.size_t legs
    return 0;
}