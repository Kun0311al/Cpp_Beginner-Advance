#include <iostream>
using namespace std;

//print the array 
void print_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

//do partition of the main array and make the sorting simple
int partition(int a[], int low, int high)//take array low and high pointer
{
    int pivot = a[low];//set pivot at low
    int i = low + 1;//set i at low +1
    int j = high;//set j at high

    do//run code once and then check the condition
    {
        while (a[i] <= pivot)//move i till i is less than or equal to pivot
        {
            i++;
        }
        while (a[j] > pivot)//move j till j is greater than pivot
        {
            j--;
        }
        if (i < j)//if the positition of i is less than j then swap the element at that position
        {
            swap(a[i], a[j]);
        }
    } while (i < j);//run do while till i is less than j
    
    swap(a[low], a[j]);//set j th element at low
    return j;//return the new value of j
}

//function to sort the array
void quick_sort(int a[], int low, int high)//take array low and high pointer
{
    int partition_index;//initialize the partition index

    if (low < high)//if the low pointer is less than high then only do
    {
        partition_index = partition(a, low, high);//set partition index at the output of partition function
        quick_sort(a, low, partition_index - 1);//new sort which takes array, low and partition index -1 pointer
        quick_sort(a, partition_index + 1, high);//new sort which takes array, partition index +1 and high pointer
    }
}

int main()
{
    int a[] = {10, 20, 2, 13, 16, 4};
    int n = 6;

    print_arr(a, n);
    cout << endl;
    quick_sort(a, 0, n - 1);
    print_arr(a, n);
    cout<<endl;
}