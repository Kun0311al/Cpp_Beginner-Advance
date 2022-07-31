#include<iostream>
using namespace std;

template<class T>
class vector2{
    public:
        T *arr;
        int size;

        vector2(int m){
            size = m;
            arr = new T[size];
        }

        T d_product(vector2 &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
    vector2<int> v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 2;
    v1.arr[2] = 4;
    vector2<float> v2(3);
    v2.arr[0] = 3.5;
    v2.arr[1] = 2.1;
    v2.arr[2] = 4.2;
    vector2<float> v3(3);
    v3.arr[0] = 1.3;
    v3.arr[1] = 2.2;
    v3.arr[2] = 3.2;
    vector2<int> v4(3);
    v4.arr[2] = 3;
    v4.arr[0] = 2;
    v4.arr[1] = 5;
    float p = v1.d_product(v4);
    cout<<"dot product of int and int vector: "<<p<<endl;
    p = v2.d_product(v3);
    cout<<"dot product of float and float vector: "<<p<<endl;
}