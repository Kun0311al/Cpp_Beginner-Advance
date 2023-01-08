#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int binary_search(int a[], int i, int n, int search){
    int mid = (i+n)/2;
    if (a[mid] == search)
    {
        return mid;
    }
    
    if (search < a[mid])
    {
        return binary_search(a, i, mid-1, search);
    }
    if (a[mid] > search)
    {
        return binary_search(a, mid+1, n, search);
    }
}

int exponential_search(int a[], int n, int search){
    if (a[0]== search)
    {
        return 0;
    }

    int i = 1;
    while (i<n && a[i]<search)
    {
        i = i*2;
        return binary_search(a, i/2, min(i, n-1), search);
    }
    
    return -1;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int search = 3;

    print_arr(a, n);
    cout<<endl;
    int index = exponential_search(a, n, search);
    
    if (index<0)
    {
        cout<<"element is not present in array.\n";
    }else
    {
        cout<<"the index of "<<search<<" is "<<index<<endl;
    }
    
    return 0;
}