#include <iostream>
using namespace std;

int main()         //Take 'n' as input from user and print the following sequence -> 1, n, 2, n-1, 3, n-2...
{
    int n;
    cout << "Enter the num: ";
    cin >> n;
    for (int i=1; i <= n; i++) {
        cout << i << endl;
        cout << n << endl;
        n-=1;                                   //more good approach -
                                                //cout << i << endl;
                                                // cout << n - i + 1 << endl;     here, the input variable is not changing, means it would remain the same, which is a good practise in programming.
    }
    return 0;
}