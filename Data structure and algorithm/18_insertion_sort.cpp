#include<iostream>
using namespace std;

//function for printing the array
void print_arr(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

//insertion sort array
void insertion_sort(int *a, int n){
    for (int i = 0; i < n; i++)//number passes required for sorting array
    {
        cout<<"pass number = "<<i<<endl;//pass number
        int key = a[i];//set key as the number which is been sorted
        int j = i-1;//set the pointer at 1 step before key
        while (j>=0 && a[j]>key)//check j is not -1
        {
            a[j+1] = a[j];//move j th term one step ahead
            j--;//decrement j for further comparison
        }
        a[j+1] = key;//set the key at the next position
        
    }
    
}

int main(){
    int a[] = {2,10,4,1,32,23};
    int n = 6;

    print_arr(a, n);
    cout<<endl;
    insertion_sort(a, n);
    print_arr(a, n);
    cout<<endl;
}