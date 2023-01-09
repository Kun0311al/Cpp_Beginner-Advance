#include<iostream>
#include<algorithm>//for including all readymade templates of algorithms
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};//vector<data type> data name = value
    int search = 14;//searching element

    if (binary_search(a.begin(), a.end(), search))//calling binary search function .begin use to find start of array
                                                  //.end for last indexx of array and search if finding element.
    {
        cout<<search<<" is present in array.\n";
    }else{
        cout<<search<<" is not present in array.\n";
    }
    
    return 0;
}