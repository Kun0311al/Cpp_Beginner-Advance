#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

void bubble_sort(int *a, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            
        }
        
    }
    
}

int main(){
    int a[] = {10,3,5,16,8};
    int n = 6;

    print_arr(a, n);
    cout<<endl;
    bubble_sort(a,n);
    print_arr(a, n);
    cout<<endl;
}