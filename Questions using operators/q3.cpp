#include <iostream>          
using namespace std;         //WAP to print the product of digts of a given number.

int main()
{ 
    int n;                                      
    cout << "Enter the number: ";
    cin >> n;
    int product = 1;
    while (n!=0) {
        int last_digit = n%10;
        n/=10;         
        product*=last_digit;
    }
    cout << product;
    return 0;
}