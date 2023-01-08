#include<iostream>
using namespace std;

//function to print the array
void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

//ternary function which takes array, start index, rear index, searching element
int ternary_search(int a[], int l, int r, int search){
    if(l<=r)//if start index is greater than rear index
    {
        int mid_1 = l +(r-l)/3;//find first mid
        int mid_2 = r -(r-l)/3;//find 2nd mid

        if (a[mid_1] == search)//element of first mid is equal to search
        {
            return mid_1;//return mid_1 value
        }
        if (a[mid_2] == search)//element of second mid is equal to search
        {
            return mid_2;
        }
        if (search < a[mid_1])//search element is less than element at mid_1
        {
            return ternary_search(a, l, mid_1 -1, search);//again call same function with new values
        }else if (a[mid_2] < search)//search element is greater than element at mid_2
        {
            return ternary_search(a, mid_2 +1, r, search);//again call same function with new values
        }
        else//search element is greater than mid_1 element and less than mid_2 element
        {
            return ternary_search(a, mid_1 +1, mid_2 -1, search);//again call same function with new values
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