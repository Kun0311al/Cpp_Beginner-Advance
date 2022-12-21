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

int main(){
    int arr[20] = {1, 2, 3, 4, 5};
    int size = 5, element = 3;
    lin_search(arr, size, element); 
}