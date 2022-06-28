#include<iostream>
int main(){
    //non const refrence
    std::cout<<"ref without const : "<<std::endl;
    int marks{90};
    int& ref_marks{marks};

    std::cout<<"marks : "<<marks<<std::endl;
    std::cout<<"ref_marks : "<<ref_marks<<std::endl;

    ref_marks++;
    //after changing the value of ref
    std::cout<<"ref after changing value : "<<std::endl;
    std::cout<<"marks : "<<marks<<std::endl;
    std::cout<<"ref_marks : "<<ref_marks<<std::endl;
    
    return 0;
}