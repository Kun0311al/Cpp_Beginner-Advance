#include<iostream>
using namespace std;

void display(int* arr, int n){
    //traversing the array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main(){
    int arr[10] = {1,2,3,4};
    display(arr, 4);
}