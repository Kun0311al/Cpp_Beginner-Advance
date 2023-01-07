#include<iostream>
using namespace std;

//function for printing the array elements
void print_arr(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

//function to perform selection sort algorithm
void selection_sort(int *a, int n){
    for (int i = 0; i < n; i++)//total number of passes
    {
        int indexOfMin = i;//set the i th element as the min
        for (int j = i+1; j < n; j++)//number of comparisons
        {
            if (a[j]< a[indexOfMin])//check the j th element with indexofmin element
            {
                indexOfMin = j;//if yes, change the indexOfMin
            }
            swap(a[i],a[indexOfMin]);//swap indexOfMin element with t th element
            
        }
        
    }
    
}

int main(){
    int a[]= {2,1,5,12,7,3};//unsorted array
    int n = 6;//size of array

    print_arr(a, n);
    cout<<endl;
    selection_sort(a, n);
    print_arr(a, n);
    cout<<endl;
}