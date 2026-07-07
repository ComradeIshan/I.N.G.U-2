#include <iostream>
using namespace std;               //Program to check if the input number is a integer or not.

int main () {
    float n;
    cin >> n;
    int x = (int) n;
    if ( x==n ) cout <<"Yes";
    else cout << "no ";
    cout << n << endl;
    cout << x ;
}