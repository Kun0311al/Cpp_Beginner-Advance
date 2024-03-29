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

        //setter
        /*void set_cat_name(std::string_view name){
            this -> name = name;
        }
        void set_cat_age(int age){
            *(this -> p_age) = age;
        }
        void print_info(){
            std::cout<<"Cat :( "<<this<<" ) name [ "<<name<<" ] age : "<<*p_age<<std::endl;
        }*/

        //setter by pointer//chained call using pointer
        /*
        cat* set_cat_name(std::string_view name){
            this -> name = name;
            return this;
        }
        cat* set_cat_age(int age){
            *(this -> p_age) = age;
            return this;
        }
        cat* print_info(){
            std::cout<<"Cat :( "<<this<<" ) name [ "<<name<<" ] age : "<<*p_age<<std::endl;
        }*/

        //chained call using refrence
        cat& set_cat_name(std::string_view name){
            this -> name = name;
            return *this;
        }
        cat& set_cat_age(int age){
            *(this -> p_age) = age;
            return *this;
        }
        cat& print_info(){
            std::cout<<"Cat :( "<<this<<" ) name [ "<<name<<" ] age : "<<*p_age<<std::endl;
        }
    private:
        std::string name;
        int* p_age{nullptr};
};

int main(){
    cat mycat("kitty",2);
    mycat.print_info();

    //this is use at the time of void setter
    // mycat.set_cat_name("Chand");
    // mycat.set_cat_age(3);
    // mycat.print_info();

    //change calls using pointers
    /*
    mycat.set_cat_name("manny")->set_cat_age(4);
    mycat.print_info();
    */

    //change calls using refrences
    mycat.set_cat_name("manny").set_cat_age(4);
    mycat.print_info();
    
    return 0;
}