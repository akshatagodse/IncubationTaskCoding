// Write a program to accept a number and check if it is positive.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n > 0)
    {
        cout << "Given number is positive";
    }
    else if (n == 0)
    {
        cout << "0 is neither positive nor negative";
    }
    else
    {
        cout << "Given number is not positive";
    }
    return 0;
}