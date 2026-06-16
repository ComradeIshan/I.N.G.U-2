#include <iostream>               //Switch is not as useful to use or it doesnot have any value for like dsa or etc.
using namespace std;

int main()
{
    //just an example
    int n1;
    cin >> n1;
    char op;
    cin >> op;
    int n2;
    cin >> n2;
    // if (op=='+') cout << n1 + n2;
    // if (op=='-') cout << n1 - n2;
    // if (op=='*') cout << n1 * n2;
    // if (op=='/') cout << n1 / n2;

    //now below is an example of switch, remember this is not used as such in dsa or even placements.
    switch (op) {
        case '+':
        cout << n1+n2;
        break;
        case '-':
        cout << n1-n2;
        break;          //breaks the loop after one case has run successfully.
        case '*':
        cout << n1*n2;
        break;
        case '/':
        cout << n1/n2;
        break;
        default:
        cout << "Invalid";
       
    }
    return 0;
}