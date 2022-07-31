#include<iostream>
using namespace std;

template<class T1=int, class T2 = float, class T3 = char>//default parameters 
class kunal{
    public:
        T1 a;
        T2 b;
        T3 c;
        kunal(T1 x,T2 y,T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"value of a is "<<a<<endl;
            cout<<"vlaue of b is "<<b<<endl;
            cout<<"value of c is "<<c<<endl;
        }
};
int main(){
    kunal<> K1(3 , 4.3 , 'k');//its use the default parameters 
    K1.display();
    cout<<endl;

    kunal<float ,char,char> K2(3.3,'k','A');//we declare parameters again
    K2.display();

    return 0;
}