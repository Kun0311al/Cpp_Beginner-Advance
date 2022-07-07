#include<iostream>

#include<string_view>
class cat{
    public:
        cat() = default;
        cat(std::string_view name_param,int c_age){
            name = name_param;
            p_age = new int;
            *p_age = c_age;
            std::cout<<"constructor called for "<<name<<std::endl;
        }
        ~cat(){
            delete p_age;
            std::cout<<"destructor called for "<<name<<std::endl;
        }
    private:
        std::string name;
        int* p_age{nullptr};
};

int main(){
    cat mycat("kitty",2);
    cat mycat2("kiyyy2",3);
    cat mycat3("mona",1);
    cat mycat4("cutty",5);
    
    return 0;
}