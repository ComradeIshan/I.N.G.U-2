#include <iostream>
using namespace std;                //There are in total 3 ways to write a AP. Explained in lec on 3 july.

int main()
{
    int a = 3, d = 4;
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cout << a << " ";
        a+=d;
    }
    return 0;
}