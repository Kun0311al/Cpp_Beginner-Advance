#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    cout<<"all vector element: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

int main(){
    vector<int> vec1;
    int ele,size;
    cout<<"enter the size of the array: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the vector element: "<<endl;
        cin>>ele;
        vec1.push_back(ele);
    }
    display(vec1);
    
}