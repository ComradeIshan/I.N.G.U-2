#include <iostream>
using namespace std;

int main()
{
    int i = 11;
    do {             //'do' makes sure that atleast ek baar loop chale.
        cout << i << " ";
        i++;
    } while (i<=10);
    return 0;
}