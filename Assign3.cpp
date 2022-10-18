// Write a program to accept a number and check if it is negative.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num < 0)
    {
        cout << "Given number is Negative";
    }
    else if (num == 0)
    {
        cout << "0 is neither positive nor negative";
    }
    else
    {
        cout << "Given number is not negative";
    }
    return 0;
}