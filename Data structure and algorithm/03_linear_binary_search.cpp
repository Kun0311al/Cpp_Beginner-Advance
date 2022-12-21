#include<iostream>
using namespace std;

void lin_search(int arr[], int size, int element){
    //linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout<<"index = "<<i<<endl;
            break;
        }
        
    }
}

int bin_search(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            cout<<mid<<endl;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}

int main(){
    int arr[20] = {1, 2, 3, 4, 5, 6};
    int size = 6, element = 3;
    lin_search(arr, size, element);
    bin_search(arr, size, element);
}