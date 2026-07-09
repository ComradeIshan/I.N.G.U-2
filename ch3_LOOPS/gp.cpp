#include <iostream>
using namespace std;

int main () {
    int a = 99;
    int n;
    // for (int i = 1; i<=25; i++) {
    //     cout << a << endl;
    //     a = a - 4;
    for (int i = 99; i > 0; i-=4) {     //more optimised approach
        cout << a << " ";
        a = a-4;
    }
     
}