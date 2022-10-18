// Write a program to accept 2 numbers A,B and check if A is divisible by B.
#include <iostream>
using namespace std;
int main()
{
    int num1 , num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    if(num2==0)
    {
        cout<<"Number should be positive only";
    }


    if (num1 % num2 == 0)
    {
        cout <<num1 <<" is divisible by " << num2;
    }
    else
    {
        cout <<num1 <<" is not divisible by " << num2;
    }

    return 0;
}
