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

int main(){
    over Kunal(3010);
    Kunal.display();

    return 0;
}