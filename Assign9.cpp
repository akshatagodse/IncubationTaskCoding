// Write a program to accept a number N and print the first N even numbers.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    cout << "Even Numbers :" << endl;
    for (int i = 2; i <= num; i = i + 2)
    {
        cout << i << endl;
    }

    return 0;
}