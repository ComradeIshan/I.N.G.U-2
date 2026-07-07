#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y) {
        if (x>z) cout << x <<" is the largest no.";
        else cout << z << " is the largest";
    }
    else {
        if (y>z) cout << y << " is the largest";
        else cout << z << " is the largest";
    }
    return 0;
}