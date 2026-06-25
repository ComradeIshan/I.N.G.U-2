#include <iostream>          
using namespace std;         //WAP to print reverse of a given number.

int main()
{ 
    // int n;                     //I wrote this code in my first try!! Elegant..huh?                        
    // cout << "Enter the number: ";
    // cin >> n;
    
    // while (n!=0) {
    //     int last_digit = n%10;
    //     n/=10;         
    //     cout << last_digit;
    // }
     
    // return 0;
    int n;
    cout << "Enter the no.: ";
    cin >> n;
    int r = 0;

    while (n!=0) {
        int last_digit = n%10;
        r *= 10;
        r += last_digit;
        n /= 10;
        
    }
    cout << r;
}