#include <iostream>
using namespace std;

int main()                  //3 sides are said to be the sides of a triangle iff sum of any two sides is greater than the third side. All three conditions should be true.
{
    int a, b, c;
    cout << "Enter the 1st side: ";
    cin >> a;
    cout << "Enter the 2nd side: ";
    cin >> b;
    cout << "Enter the 3rd side: ";
    cin >> c;

    if ((a + b) > c && (b + c) > a && (a + c) > b ) {
        cout << "Valid Traingle.";
    } else {
        cout << "Not a traingle.";
    }

    // if (a + b > c) {           THIS WAS WRONG.
    //     cout << "It is a traingle.";
    // } else if (b + c > a) {
    //     cout << "It is a traingle.";
    // } else if (a + c > b) {
    //     cout << "It is a traingle.";
    // } else {
    //     cout << "It is not a traingle.";
    // }


    return 0;
}