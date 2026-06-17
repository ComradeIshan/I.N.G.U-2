#include <iostream>
using namespace std;

int main()
{
    for (int i=1; i<=20; i++) {
       if (i==3 || i==8) continue;      //3 and 8 pe loop skip ho jaega.
        cout << i << endl;
         
    }
    return 0;
}