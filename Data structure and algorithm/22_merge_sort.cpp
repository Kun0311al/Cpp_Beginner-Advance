#include<iostream>
using namespace std;

void print_arr(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

void merge(int a[], int low, int mid, int high){
    int i, j, k, b[20];
    i = low;
    j = mid+1;
    k = low;

    while (i<=mid && j<=high)
    {
        if (a[i]<=a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else{
            b[k] = a[j];
            k++;
            j++;
        }
        
    }
    while (i<=mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j<=high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void merge_sort(int a[], int low, int high){
    int mid;
    if (low<high)
    {
        mid = (low+high)/2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
    
}

int main(){
    int a[] = {1, 30, 23, 16, 3, 18};
    int n = 6;

    print_arr(a, n);
    cout<<endl;
    merge_sort(a, 0, n-1);
    print_arr(a, n);
}