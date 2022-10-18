//Write a program to accept a number and check if it is even.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "0 is neither Odd nor even";
    }
    else if (num % 2 != 0)
    {
        cout << num << " number is not even";
    }
    else
    {
        cout << num << " number is  even ";
    }
}