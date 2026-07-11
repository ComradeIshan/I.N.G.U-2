#include <iostream>
#include <cmath>  //Header file to use maths functions.
using namespace std;
                                                 //beautiful problem, must have a look!!!
int main()
{
    int n;
    cout << "Enter num.: ";
    cin >> n;
    for (int i=1;i<=sqrt(n);i++) {
        if (n%i==0) {cout << i << " "; 
        if (i != n/i) cout << n/i << " ";
        }
    }
    return 0;
}