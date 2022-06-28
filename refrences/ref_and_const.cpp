#include<iostream>
int main(){
    //non const refrence
    std::cout<<"ref without const : "<<std::endl;
    int marks{90};
    int& ref_marks{marks};
    //const int& ref_marks{marks}; if we use this we can get the compile error
    //bcoz const variable we cant change

    std::cout<<"marks : "<<marks<<std::endl;
    std::cout<<"ref_marks : "<<ref_marks<<std::endl;

    ref_marks++;
    //after changing the value of ref
    std::cout<<"ref after changing value : "<<std::endl;
    std::cout<<"marks : "<<marks<<std::endl;
    std::cout<<"ref_marks : "<<ref_marks<<std::endl;

    //tryint to change the value by using const pointer
    const int* const p_marks{&marks};
    std::cout<<"marks : "<<marks<<std::endl;
    std::cout<<"p_marks : "<<*p_marks<<std::endl;

    //*p_marks++; we also can't change the value of the const pointer

    return 0;
}