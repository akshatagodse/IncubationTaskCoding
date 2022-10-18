
// Write a program to accept a number N and print the first N natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    if(num==0 || num<0)
    {
        cout << "Natural Numbers always starts with 0" << endl;
    }
    else
    {
    cout << "Natural Numbers are:" << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
    }

    return 0;
}