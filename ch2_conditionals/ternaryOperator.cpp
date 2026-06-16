#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    // (condition) ? if true : if false ;   -> way to write a ternary operator
    (n%2==0) ? cout << "Even" : cout << "Odd";
    return 0;
}