#include <iostream>
using namespace std;

//for printing the elements from array
void print_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

//functuion to find the maximum from the array
int maximum(int *a, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

//count sort function
void count_sort(int *a, int n)//takes array and the size of array
{
    int max = maximum(a, n);//find maximum
    int *count = (int *)malloc((max + 1) * sizeof(int));//allocate dynamic memory for count array
    //initializing the all elements of count array to 0
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    // Increment the corresponding index in the count array
    for (int i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }
    int j = 0;//counter for count array
    int k = 0;//counter for given array
    while (j < max + 1)//code run till the count pointer reaches to max+1 position
    {
        if (count[j] > 0)//the value at pericular index is greater than 0
        {
            a[k] = j;//set k th element in given array as j
            count[j]--;//decrement the count
            k++;//increment the given array pointer
        }
        else
        {
            j++;//otherwise increment count array pointer
        }
    }
}

int main()
{
    int a[] = {3, 1, 9, 7, 1, 2, 4};
    int n = 7;

    print_arr(a, n);
    cout << endl;
    count_sort(a, n);
    print_arr(a, n);
}