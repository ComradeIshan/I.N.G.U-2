#include <iostream>          //Review this question, it is a perfect example of nested if - else.
using namespace std;
              
int main()               //Ques : Take 3 positive integers input and print greatest of them.                       //the greatest of them.
{
    int a, b, c;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter 3rd number: ";
    cin >> c; 

    if (a > b) {
        if (a > c) {
            cout << a << " is the largest!.";
        } else {
            cout << c << " is the largest";
        }
    } else {
        if (b > c) {
            cout << b << " is the largest.";
        } else {     //means b is greater than a butt b is not greater than c -> c>b>a.
            cout << c << " is the largest";
        }
    }

    return 0;
}