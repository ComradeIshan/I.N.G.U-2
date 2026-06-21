#include <iostream>
using namespace std;

int main() {  //x = x + 2 means the same as x += 2 similarly for x -=, x *= adn x/=.
    int x, y;
    
    x = 5; y = 10;
    x /= 8;         //Think yourself what will happen here.
    int sum = x + y;
    cout << sum;
} 