#include<iostream>
using namespace std;

void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int ternary_search(int a[], int l, int r, int search){
    if(l<=r)
    {
        int mid_1 = l +(r-l)/3;
        int mid_2 = r -(r-l)/3;

        if (a[mid_1] == search)
        {
            return mid_1;
        }
        if (a[mid_2] == search)
        {
            return mid_2;
        }
        if (search < a[mid_1])
        {
            return ternary_search(a, l, mid_1 -1, search);
        }else if (a[mid_2] < search)
        {
            return ternary_search(a, mid_2 +1, r, search);
        }
        else
        {
            return ternary_search(a, mid_1 +1, mid_2 -1, search);
        }
    }
    return -1;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int search = 5;

    print_arr(a, n);
    cout<<endl;
    int p = ternary_search(a, 0, n-1, search);
    cout<<"index of "<<search<<" is "<<p<<endl;
}   