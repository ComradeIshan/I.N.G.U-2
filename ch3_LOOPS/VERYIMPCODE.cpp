#include <iostream>            //MUST REVISE!!!
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n; 
    bool flag = true;          //True means the no. is prime.
    for (int i=2; i<=n/2; i++) {
        if (n%i==0) {
            flag = false; // flase the no. is composite
            break;   // to get out of the loop.
        }
    }
    if (n==1) cout << "Neither prime nor composite";
    else if (flag == true) cout << "The no. is prime";
    else cout << "The no. is composite";
    return 0;
}