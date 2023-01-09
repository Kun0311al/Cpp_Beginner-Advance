#include<iostream>
using namespace std;

//function to print elements in array
void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//binary search after getting the range
int binary_search(int a[], int i, int r, int search){
    if (r>=i)//when the start pointer is less than or equal to rear pointer
    {
        int mid = (i+r)/2;//taking mid
        if (a[mid] == search)
        {
            return mid;
        }
        
        if (search < a[mid])
        {
            return binary_search(a, i, mid-1, search);//againf binary search with new parameters
        }
        if (a[mid] > search)
        {
            return binary_search(a, mid+1, r, search);//againf binary search with new parameters
        }
    }
    
}

//actual algorithm of exponential search
int exponential_search(int a[], int n, int search){
    if (a[0]== search)//if first element is equal to search
    {
        return 0;
    }

    int i = 1;//initializing the i
    while (i<n && a[i]<=search)//run till the value of i<n and element at i is less than or equal to search
    {
        i = i*2;//resizing the array
        return binary_search(a, i/2, min(i, n-1), search);//i/2 for starting point , min(i, n-1) for ending point
                                                          //min(i, n-1) use to find the minimum btwn i or n-1
    }
    
    return -1;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);//length of given array
    int search = 2;//searching element

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