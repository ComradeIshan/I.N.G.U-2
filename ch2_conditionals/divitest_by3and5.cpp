#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the number: ";
    cin >> m;
    if (m%5 == 0 && m%3 ==0) {           //1st method of solving
        cout << "It is divisible by both 3 and 5";  //2nd and the easiest method would be :- if( m%15 ==0). That's it!
    } else {
        cout << "It is not";
    }
    return 0;
}