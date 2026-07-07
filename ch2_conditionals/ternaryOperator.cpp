#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    // (condition) ? agr sach hua to : agr jhoot hua to ;   -> way to write a ternary operator
    (n%2==0) ? cout << "Even" : cout << "Odd";  
    // another way to write -> cout << ((n%2==0) ? "Even" : "Odd");
    return 0;
}