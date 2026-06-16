#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if ( n>99 and n<1000) {  //and can also be written as '&&', or operator as ' || '.
        cout << "Its a 3 digit number!";
    } else {
        cout << "It is not";
    }

    return 0;
}