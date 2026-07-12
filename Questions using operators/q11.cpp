#include <iostream>
using namespace std;

int main()             //Wap to find if a num is prime or not. 
{
    int n;
    cout << "Enter num: ";
    cin >> n;
    bool prime = false;    //false means vo prime hai
    for (int i=2; i<=(n-1); i++) { 
        if (n%i==0) {
            prime = true;
            break;
        }
    } 
    if (prime==true) cout << "The num is composite.";
    else cout << "The num is prime.";
    
    
    // int count = 0;     //Exhaustive approach
    // for (int i=1; i<=n; i++) {
    //     if (n%i==0) {
    //         count++;
    //     } 
    // }
    // if (count==1) cout << "The num is neither prime nor composite";
    // else if (count>2) cout << "The num is composite.";
    // else cout << "The num is prime.";      
    return 0; 
}