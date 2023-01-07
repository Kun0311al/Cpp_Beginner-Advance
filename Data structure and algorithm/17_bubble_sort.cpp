#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main(){
    int a[] = {10,3,5,16,8};
    int n = 6;

    print_arr(a, n);
}