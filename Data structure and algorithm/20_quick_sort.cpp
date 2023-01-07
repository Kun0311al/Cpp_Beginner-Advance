#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main(){
    int a[] = {10, 20, 2, 13, 16, 4};
    int n = 6;

    print_arr(a, n);
    cout<<endl;
}