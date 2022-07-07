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
        int* total;
};

int main(){
    dog dog1;
    std::cout<<"size of (size_t) : "<<sizeof(size_t)<<std::endl;
    std::cout<<"size of (int*) : "<<sizeof(int*)<<std::endl;
    std::cout<<"size of (dog) : "<<sizeof(dog1)<<std::endl;//it shows the total size of the object i.e.size_t legs
                                                            //size_t arms and functions are not count in it
    std::string sent = "I am the king";
    std::cout<<"sizeof(string name) : "<<sizeof(sent)<<std::endl;
    return 0;
}