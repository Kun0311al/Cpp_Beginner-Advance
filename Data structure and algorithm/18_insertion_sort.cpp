#include<iostream>
using namespace std;

void print_arr(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void insertion_sort(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"pass number = "<<i<<endl;
        int key = a[i];
        int j = i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        
    }
    
}

int main(){
    int a[] = {2,10,4,1,32,23};
    int n = 6;

    print_arr(a, n);
    cout<<endl;
    insertion_sort(a, n);
    print_arr(a, n);
}