#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if ((n%5 == 0 || n%3 ==0) && n%15 != 0) {
        cout << "This is the number.";
    } else {
        cout << " this does not satisfies the condition.";
    }
    return 0;
}