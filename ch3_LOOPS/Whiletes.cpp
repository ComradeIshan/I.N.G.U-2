#include <iostream>
using namespace std;

int main()
{
    int i;                            //This is an infinite loop!!!!
    while (i==10) {
        cout << i << endl;
        i = i+1;
    }
    return 0;
}