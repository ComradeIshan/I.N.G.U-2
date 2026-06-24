#include <iostream>          //Increible question!!
using namespace std;         //WAP to print the sum of digts of a given number.

int main()
{ 
    int n;                                      // 67 % 10 -> 7
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    while (n!=0) {
        int last_digit = n%10;
        n/=10;         // this means the same as n = n/10
        sum += last_digit;
    }
    cout << sum;
    return 0;
}