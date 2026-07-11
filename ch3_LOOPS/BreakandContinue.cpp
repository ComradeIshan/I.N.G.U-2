#include <iostream>
using namespace std;  

int main () { 
    for (int i=1; i <=10; i++) {       //example of break
        if (i==5) break;
        cout << i << " ";
    }
    for (int i=1; i <=10; i++) {       //example of Continue
        if (i==5) continue;            //continue skips an iteration
        cout << i << " ";
    }
}