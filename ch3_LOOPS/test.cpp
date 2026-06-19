#include <iostream>
using namespace std;

int main()
{
    for (int i=1; i<=20; i++) {
        if (i!=3 && i!=8) cout << i << endl;  // This means print the number only if it is NOT 3 and NOT 8.
    }
    return 0;
}