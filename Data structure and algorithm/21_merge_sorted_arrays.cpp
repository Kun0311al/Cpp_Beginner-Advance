#include<iostream>
using namespace std;

//for printing the elements from array
void print_arr(int *c, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    
}

//for merging two sorteed array
void merge_sort(int a[], int b[], int c[], int m, int n){
    int i, j, k;
    i = j = k = 0;//set all pointers at 0
    while (i<m && j<n)//till pointer reach at their high
    {
        if (a[i]<b[j])
        {
            c[k] = a[i];//add i 3rd array
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];//add i 3rd array
            j++;
            k++;
        }        
    }
    while (i<m)//adding all remaining elements from array 1
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j<n)//adding all remaining elements from array 2
    {
        c[k] = b[j];
        j++;
        k++;
    }
    
}

int main(){
    int a[] = {1, 3, 5, 7, 9};
    int m = 5;
    int b[] = {0, 2, 4, 6, 8};
    int n = 5;
    int c[m+n];

    merge_sort(a, b, c, m, n);
    print_arr(c, m+n);
}