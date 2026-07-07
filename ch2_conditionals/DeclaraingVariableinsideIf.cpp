#include <iostream>
using namespace std;

int main()
{
    int x = 4, y = 6;
    if (x++ || y++) cout << x << " " << y;      //This is known as shortcircuiting. Only the first condition runs here, that's why the output is 5 and 6.
    else cout << "Kuch nhi";
    return 0;
}