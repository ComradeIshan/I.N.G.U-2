#include <iostream>        //WAP to print greatest of three numbers using ternary operators.
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int greatest = (x > y)
    ? ((x > z) ? x : z)
    : ((y > z) ? y : z);
    cout << greatest;


    return 0;
}