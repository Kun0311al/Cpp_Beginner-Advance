#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main(){
    int a[] = {3, 1, 9, 7, 1, 2, 4};
    int n = 7;

    print_arr(a, n);
}