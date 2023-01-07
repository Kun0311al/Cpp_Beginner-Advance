#include<iostream>
using namespace std;


//function to print the array
void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

//adaptive bubble sort code which saves moves and time behind the sorted array
//function for bubble sort the array
void bubble_sort(int *a, int n){
    int sorted = 0;//check the code is sorted or not
    for (int i = 0; i < n-1; i++)//number of passes
    {
        cout<<"pass Number = "<<i+1<<endl;//pass number
        sorted = 1;
        for (int j = 0; j < n-1-i; j++)//number of comparisons
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted = 0;
            }            
        }
        if (sorted == 1)//if array is already swapped then break
        {
            break;
        }
        
    }    
}

int main(){
    int a[] = {10,3,5,16,8};
    int b[] = {1,2,3,4,5};
    int n = 5;

    print_arr(a, n);
    cout<<endl;
    bubble_sort(a,n);
    print_arr(a, n);
    cout<<endl;
    bubble_sort(b, n);
    print_arr(b,n);
}