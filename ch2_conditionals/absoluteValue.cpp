#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    // if (n < 0) {
    //     cout << "The absolute value of " << n << " is " << -n << ".";
    // } else {
    //     cout << "It is already positive.";
    // }
    if (n < 0) n = -n; //This is a short hand if statement, it is same as the above if statement.
    cout << "The absolute value of " << -n << " is " << n << ".";  //little short code hai bus.
    return 0;
}