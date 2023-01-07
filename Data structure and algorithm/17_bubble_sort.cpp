#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

void bubble_sort(int *a, int n){
    int sorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        cout<<"pass Number = "<<i+1<<endl;
        sorted = 1;
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted = 0;
            }            
        }
        if (sorted == 1)
        {
            break;
        }
        
    }    
}

int main(){
    int a[] = {10,3,5,16,8};
    int b[] = {1,2,3,4,5};
    int n = 6;

    print_arr(a, n);
    cout<<endl;
    bubble_sort(a,n);
    print_arr(a, n);
    cout<<endl;
    bubble_sort(b, n);
    print_arr(b,n);
}