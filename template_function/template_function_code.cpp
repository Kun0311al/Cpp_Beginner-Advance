#include<iostream>
using namespace std;

template <class T>//declaration of the data type of the class as per the code
class vector{
    public:
        T *arr;
        int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T d_product(vector &v){
            T d=0;
            for(int i=0;i<=size;i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
    vector <float> v1(4);
    v1.arr[0]= 3.2;
    v1.arr[1] = 2.5;
    v1.arr[2] = 3.5;
    v1.arr[3] = 1.2;
    vector<float> v2(4);
    v2.arr[0] = 2.3;
    v2.arr[1] = 5.2;
    v2.arr[2] = 1.3;
    v2.arr[3] = 0;
    float p = v1.d_product(v2);//v1 is the main vector and v2 is the vector with whom the multiplication will happen
    cout<<p<<endl;

    return 0;
}