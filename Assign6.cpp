// Write a program to accept 2 numbers a A,B and calculate A ^ B(A to the powe B) .
#include <iostream>
 
using namespace std;
  
int main(){
    int base, exponent, result = 1;
     
 cout << "Enter base : \n";
    cin >> base;
    cout << "Enter exponent : \n";
    cin >> exponent;
     
   
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
      
    cout <<"Result = " << result;
     
    return 0;
}