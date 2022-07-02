#include<iostream>
void enter_bar(unsigned int age)//function parameters
{
    if (age>18){
        std::cout<<"welcome in bar!!"<<std::endl;
    }else{
        std::cout<<"sorry you are not mature.."<<std::endl;
    }
    
}//void are not return function
void max(int first_no,int second_no)
{
    if (first_no>second_no)
    {
        std::cout<<"the max no. is: "<<first_no<<std::endl;
    }
    else
    {
        std::cout<<"the max no is: "<<second_no<<std::endl;
    }
}
//int is the return type function
int min(int first_no,int second_no){
    if(first_no<second_no)
        return first_no;
    else
        return second_no;
}
int main(){
    unsigned int a{};
    std::cout<<"enter your age: ";
    std::cin>>a;
    //calling enter_bar
    enter_bar(a);//function argument
    int b,c;
    std::cout<<"enter two integer no.: ";
    std::cin>>b>>c;
    //calling max
    max(b,c);
    int result = min(b,c);
    std::cout<<"min : "<<result<<std::endl;
    return 0;
}