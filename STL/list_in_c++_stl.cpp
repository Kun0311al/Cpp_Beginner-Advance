#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator iter;
    for (iter = lst.begin();iter!=lst.end()/*end position of the list*/;iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
    //list<int> list1;//list of 0 length
    //list<int> list2(7);//empty list of size 7

    //list2 declaration
    list<int> list2;

    list2.push_back(3);//add the element fron back
    list2.push_back(10);
    list2.push_back(6);
    list2.push_back(8);
    list2.push_back(15);
    list2.push_back(13);
    list2.push_back(22);
    list2.push_back(81);
    list2.push_back(45);

    display(list2);
    list2.pop_back();//delete the element from back
    display(list2);
    list2.pop_front();//delete the element from front
    display(list2);
    list2.remove(6);//its remove the 6's from this list
    display(list2);

    //list1 declaration
    list<int> list1(4);
    list<int> :: iterator it;//iterator is like a pointer
    it = list1.begin();
    *it = 33;//giving the value to the empty space
    it++;//change the pointer
    *it = 9;
    it++;
    *it = 38;
    it++;
    *it = 26;
    it++;
    display(list1);

    //swapping the lists
    list2.swap(list1);

    //sorting the array
    list2.sort();
    display(list2);
    list1.sort();

    //mearge the sorted lists
    list1.merge(list2);
    cout<<"after mearging list1: ";
    display(list1);

    //reverse the list
    list1.reverse();//arrange the elements in the reverse order
    display(list1);

    return 0;
}