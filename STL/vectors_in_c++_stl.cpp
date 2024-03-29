#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){//taking the refrence fron the main
    cout<<"all vector element: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";//this is same as the v[i] u can use this instead of v[i].
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;//zero length integer vector 1st way to make the vector
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

    //other ways to create the vectors
    vector<char> vec2(4);//this means the size of the vec2 is 4
    vec2.push_back(3);
    display(vec2);
    vector<char> vec3(vec2);//this means the vec3 is depends on the vec2
    display(vec3);
    vector<double> vec4(4,10);//this means the vec4 consist of the 4 10's output is 10 10 10 10..like this 
    display(vec4);
    
    return 0;
}