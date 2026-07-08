#include <iostream>
using namespace std;             //Odd numbers divisible by 3 and are between 1 and 100

int main () {
    for (int i = 1; i <= 100; i++) {
       if ((i%2!=0) && (i%3==0)) cout << i << endl; 

    }
}