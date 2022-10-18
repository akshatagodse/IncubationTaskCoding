// Write a program to accept a number and check if it is prime.

#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "Enter a number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)

        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }

    return 0;
}