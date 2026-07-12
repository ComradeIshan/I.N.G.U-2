#include <iostream>
using namespace std;

int main()               //Take an integer n as input. Print the minimum non-negative integer that must be added
                         //to n to make it exactly divisible by 7. Use the modulus operator.
{
    int n;
    cout << "Enter Num: ";
    cin >> n;
    int min_nonNegativeNum;
    if (n%7 != 0) cout << 7 - (n%7);
    else cout << 0;
    return 0;
}