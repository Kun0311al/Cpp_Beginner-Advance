#include<iostream>
using namespace std;

void prime_number(int search){
    if (search < 1)
    {
        cout<<"Oops something is wrong!\n";
    }
    if (search == 1)
    {
        cout<<"this is not a prime and nor a composite.\n";
    }
    else{
        for (int i = 2; i < search; i++)
        {
            if (search%i == 0)
            {
                cout<<"this is not a prime number.\n";
                break;
            }            
        }
        cout<<"this is prime number,\n";
    }
    
    
}

int main(){
    int search{};

    cout<<"Check the number is prime or not.\n";
    cout<<"Enter the number: \n";
    cin>>search;
    prime_number(search);

    return 0;
}