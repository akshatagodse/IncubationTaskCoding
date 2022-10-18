//Write a program to accept a number N and print the first N odd numbers
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    cout << "Odd Numbers :" << endl;
    for (int i = 1; i <= num; i = i + 2)
    {
        cout << i << endl;
    }

    return 0;
}