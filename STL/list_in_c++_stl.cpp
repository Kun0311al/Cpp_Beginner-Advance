#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator iter;
    for (iter = lst.begin();iter!=lst.end();iter++)
    {
        cout<<*iter<<" ";
    }
}

int main(){
    //list<int> list1;//list of 0 length
    //list<int> list2(7);//empty list of size 7
    list<int> list2;

    list2.push_back(3);
    list2.push_back(10);
    list2.push_back(6);
    list2.push_back(8);
    list2.push_back(15);

    display(list2);

    return 0;
}