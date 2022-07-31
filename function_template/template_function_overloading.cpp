#include<iostream>
using namespace std;

template<class T>
class over{
    public:
        T data;
        over(T a){
            data = a;
        }
        void display();
};

template<class T>
void over<T>::display(){
    cout<<data<<endl;
}

template<class T>
void func(T a){
    cout<<"call this func(1)"<<endl;
}

void func(int a){
    cout<<"call this func(int)"<<endl;
}

int main(){
    over Kunal(3010);
    Kunal.display();

    func(2);//this function gives the high priority to the same data type function if we have any
    func(3.2);

    return 0;
}