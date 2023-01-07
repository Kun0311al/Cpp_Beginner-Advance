#include <iostream>
using namespace std;

void print_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

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
void count_sort(int *a, int n)
{
    int max = maximum(a, n);
    int *count = (int *)malloc((max + 1) * sizeof(int));
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }
    int j = 0;
    int k = 0;
    while (j < max + 1)
    {
        if (count[j] > 0)
        {
            a[k] = j;
            count[j]--;
            k++;
        }
        else
        {
            j++;
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