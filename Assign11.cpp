// Write a program to accept a number N and print the first N terms of the Fibonacci series.
#include <iostream>
using namespace std;

int main() {
    int num, num1 = 0, num2 = 1, num3 = 0;

    cout << "Enter the number till which u want fibanacci series : ";
    cin >> num;


    for (int i = 1; i <= num; ++i) {
       
        if(i == 1) {
            cout << num1<<"\n";
            continue;
        }
        if(i == 2) {
            cout << num2<<"\n";
            continue;
        }
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        
        cout << num3<<"\n";
    }
    return 0;
}