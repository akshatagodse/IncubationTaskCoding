#include <iostream>
using namespace std;

int main() {
    int n;
    float factorial = 1;

    cout << "Enter a number : ";
    cin >> n;

    if (n < 0)
        cout << "Negative number does not exist with factorial ";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}