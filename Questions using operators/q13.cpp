#include <iostream>                       //Take two integers a and b (b ̸= 0) as input. Print the result of ceiling integer division
using namespace std;                       //of a by b.
                                           //Ceiling division always rounds up, e.g., ⌈7/2⌉ = 4, whereas normal integer division gives 3.
int main()
{                            
    int a, b;
    cin >> a >> b;  
    cout << (a+b-1)/b;                                        
    return 0;
}