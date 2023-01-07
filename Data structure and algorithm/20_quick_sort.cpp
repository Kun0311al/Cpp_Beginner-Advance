#include <iostream>
using namespace std;

void print_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    } while (i < j);
    
    swap(a[low], a[j]);
    return j;
}

void quick_sort(int a[], int low, int high)
{
    int partition_index;

    if (low < high)
    {
        partition_index = partition(a, low, high);
        quick_sort(a, low, partition_index - 1);
        quick_sort(a, partition_index + 1, high);
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
}