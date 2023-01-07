#include<iostream>
using namespace std;

void print_arr(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main(){
    int a[] = {1, 30, 23, 16, 3, 18};
    int n = 6;

    print_arr(a, n);
}