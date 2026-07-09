#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // for (int i=n; i>=1; i--) {
    //     cout << i << " ";
    // }
    for (int i = 1; i <= n; i++){         //Another incredible way!
        cout << n+1-i << " ";
    }    return 0;
}