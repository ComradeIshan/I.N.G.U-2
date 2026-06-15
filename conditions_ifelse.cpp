#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    if (x % 2 == 0) {
        cout << "The given number is even.";
    } else {
        cout << "The given number is odd.";
    }
    return 0;
}