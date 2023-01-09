#include <iostream>
using namespace std;

// function to check the code is prime or not
void prime_number(int search)
{
    if (search < 1) // when number is less than 1 then show wrong number
    {
        cout << "Oops something is wrong!\n";
    }
    if (search == 1) // number is equal to 1 then it is not a prime and nor a composite
    {
        cout << "this is not a prime and nor a composite.\n";
    }
    else
    {
        for (int i = 2; i < search; i++) // for value of divisor from 2 to the number-1
        {
            if (search % i == 0) // check the modules is equal to 0 or not is yes then not prime
            {
                cout << "this is not a prime number.\n";
                break;
            }
        }
        cout << "this is prime number,\n"; // otherwise print this
    }
}

int main()
{
    int search{};

    cout << "Check the number is prime or not.\n";
    cout << "Enter the number: \n";
    cin >> search;
    prime_number(search);

    return 0;
}