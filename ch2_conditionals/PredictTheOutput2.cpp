#include <iostream>
using namespace std;
                            //incredible CONCEPT!! MUST REVISE!!!
int main()
{
    int x = 3, y, z;
    y = x = 10;      //Here, the precedence will be from right to left, means pehle x = 10 hoga then y = x hoga.
    z = x < 10;      //like above stated statement, pehle x < 10 check hoga, which will be false as x is equal to 10, and 
    cout << x << " " << y << " " << z;  //10 is not less than 10. to iska output 0 aaega as this condition is false.
    return 0;
}