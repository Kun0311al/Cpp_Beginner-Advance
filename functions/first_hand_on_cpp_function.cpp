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
//function don't take parameter and not return any thing
void say_hello(){
    std::cout<<"Hello everyone, this is kunal parkar!!"<<std::endl;
    return;
}
//function not taking paraameters but give the retuen value
int lucky_no(){
    return 10;
}
//this function increment the given parameters and multiply them 
double increment_and_multiply(double a,double b){
    std::cout<<"the given input is: "<<std::endl;
    std::cout<<"first no: "<<a<<std::endl;
    std::cout<<"second no: "<<b<<std::endl;
    double result =((++a)*(++b));
    std::cout<<"the value of the a (after): "<<a<<std::endl;
    std::cout<<"the value of the b (after): "<<b<<std::endl;
    return result;
    /*this incrementation and the other this are only valid for this function only*/
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
    //calling min
    int result = min(b,c);
    std::cout<<"min : "<<result<<std::endl;
    //calling say_hello
    say_hello();
    //calling lucky_no
    std::cout<<"lucky number is: "<<lucky_no();
    increment_and_multiply(b,c);
    return 0;
}