#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the no: ";
    cin >> n;
    for (int i=n/2; i>1; i--) {
        if (n%i==0) 
        {cout << "The number is composite.";
        break;} else cout << "The no. is not compostie.\n"; break;
    }
    return 0;
}