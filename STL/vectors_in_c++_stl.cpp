#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){//taking the refrence fron the main
    cout<<"all vector element: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";//this is same as the v[i] u can use this instead of v[i].
    }
    cout<<endl;
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
        vec1.push_back(ele);//push_back is use to add the element at the end of the vector
    }
    //vec1.pop_back();//pop_back() is use to delete the last element in the vector

    display(vec1);
    vector<int> :: iterator iter = vec1.begin();//define the iterator syntex is iterator iteratorname = position
    vec1.insert(iter, 23);
    display(vec1);
    vec1.insert(iter+2,10);//iter+2 means add the element in the iter + 2 th position in this case the element will add on 3rd position
    display(vec1);
    vec1.insert(iter+1,4,310);//adding 310 by 4 times at the position iter+1
    display(vec1);

    return 0;
}