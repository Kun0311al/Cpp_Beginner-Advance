#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int ternary(int a[], int mid_1, int mid_2, int l, int r, int search){
    if (a[mid_1] == search)
    {
        cout<<"index no.: "<<mid_1<<endl;
    }
    if (a[mid_2] == search)
    {
        cout<<"index no.: "<<mid_2<<endl;
    }
    if (search < a[mid_1])
    {
        r = mid_1 -1;
    }
    if (a[mid_2] < search)
    {
        l = mid_2 +1;
    }
    else
    {
        l = mid_1 +1;
        r = mid_2 -1;
    }
    
}

void ternary_search(int a[], int l, int r, int search){
    int mid_1, mid_2;
    while(l<r)
    {
        mid_1 = l +(r+l)/3;
        mid_2 = r -(r+l)/3;
        ternary(a, mid_1, mid_2, l, r, search);
    }
    if (l == r)
    {
        if (a[l] == search)
        {
            cout<<"index no.: "<<l<<endl;
        }
        
    }
    
    
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int search = 5;

    print_arr(a, n);
    cout<<endl;
    ternary_search(a, 0, n-1, search);
}