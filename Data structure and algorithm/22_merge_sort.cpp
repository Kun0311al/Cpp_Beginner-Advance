#include <iostream>
using namespace std;

// for printing the elements in the array
void print_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// for merging the array
void merge(int a[], int low, int mid, int high) // it takes array, low mid and high pointers
{
    int i, j, k, b[high-low+1];
    i = low;     // set i pointer at low
    j = mid + 1; // set j pointer at mid+1
    k = low;     // set k pointer at low

    while (i <= mid && j <= high) // run code untill i reaches to mid or j to high
    {
        if (a[i] <= a[j]) // when i th element is small or equal to j th element
        {
            b[k] = a[i]; // add i th element in array
            k++;
            i++;
        }
        else
        {
            b[k] = a[j]; // otherwise add j th element in array
            k++;
            j++;
        }
    }
    while (i <= mid) // adding remaining elements till mid
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high) // adding remaining elements till high
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++) // coping all b[] array in a[]
    {
        a[i] = b[i];
    }
}

// function todo partition of main array
void merge_sort(int a[], int low, int high) // takes array , low and high pointer
{
    int mid;
    if (low < high) // when low is less than high
    {
        mid = (low + high) / 2;       // finding mid of array
        merge_sort(a, low, mid);      // left side array
        merge_sort(a, mid + 1, high); // right side array
        merge(a, low, mid, high);     // calling merhe function and give array, low, mid, high pointers respectively
    }
}

int main()
{
    int a[] = {1, 30, 23, 16, 3, 18};
    int n = 6;

    print_arr(a, n);
    cout << endl;
    merge_sort(a, 0, n - 1);
    print_arr(a, n);
}