#include <iostream>          
using namespace std;         //WAP to print the sum of all the even digts of a given number.

int main()
{ 
    int n;                                     
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    while (n!=0) {
        int last_digit = n%10;
        n/=10;         
        if (last_digit%2 == 0) {
            sum = sum + last_digit;
        }  
    }
    cout << sum; 
    return 0;
}