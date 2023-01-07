#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void selection_sort(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        int indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]< a[indexOfMin])
            {
                indexOfMin = j;
            }
            swap(a[i],a[indexOfMin]);
            
        }
        
    }
    
}

int main(){
    int a[]= {2,1,5,12,7,3};
    int n = 6;

    print_arr(a, n);
    cout<<endl;
    selection_sort(a, n);
    print_arr(a, n);
    cout<<endl;
}