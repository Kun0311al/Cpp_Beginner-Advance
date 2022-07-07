/*'this' is use to point the address of the current object*/

#include<iostream>

#include<string_view>
class cat{
    public:
        cat() = default;
        cat(std::string_view name_param,int c_age){
            name = name_param;
            p_age = new int;
            *p_age = c_age;
            std::cout<<"constructor called for "<<name<<"at "<<this<<std::endl;
        }
        ~cat(){
            delete p_age;
            std::cout<<"destructor called for "<<name<<" at "<<this<<std::endl;
        }
        void set_cat_name(std::string_view name){
            this -> name = name;
        }
        void print_info(){
            std::cout<<"Cat :( "<<this<<" ) name [ "<<name<<" ] age : "<<*p_age<<std::endl;
        }
    private:
        std::string name;
        int* p_age{nullptr};
};

int main(){
    cat mycat("kitty",2);
    mycat.set_cat_name("Chand");
    mycat.print_info();
    
    return 0;
}