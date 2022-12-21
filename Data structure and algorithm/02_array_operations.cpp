#include<iostream>
using namespace std;

void display(int arr[], int n){
    //traversing the array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

void insert(int arr[], int size_a, int element, int capacity, int index){
    if (size_a>=capacity){
        cout<<"array is full. you can not add data.\n";
    }
    for(int i= size_a-1; index <= i; i--){
        arr[i+1]=arr[i];
    }
    arr[index]= element;

}

int main(){
    int arr[10] = {1,2,3,4};
    int size = 4, element = 10, index = 3;
    display(arr, size);
    insert(arr, size, element, 100, index);
    size++;
    display(arr, size);
}