#include <iostream>
using namespace std;          //Program to find if a character is capatalized or not.

int main () {
    char x;
    cin >> x;
    int y = (int) x;
    if (y>=65 && y<=90) cout << "Yes";
    else cout << "No";
}