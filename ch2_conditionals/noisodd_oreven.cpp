#include <iostream>
using namespace std;

int main()
{
    int n; //Int can take at only certain maximum value, like when i was entering value like 154987974894894 it was displaying somthng randomn, to avoid this 
    cout << "Enter an integer: "; //we can use long long datatype.
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " is even.\n" ;
    } else {
        cout << n << " is odd.\n" ;
    }
    return 0;
}