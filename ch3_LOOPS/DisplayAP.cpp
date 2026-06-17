#include <iostream>
using namespace std;               //Very nice question, review this!!

int main()
{
    int n;
    cout << "Enter the number till where you want the terms: ";
    cin >> n;
    for (int i=1; i<=(1 + (n-1)*2); i+=2){        //<- incredible!! i did this after some errors.
        cout << i << " ";                         //The condition can also be written as i <= (2*n - 1)
    }
    return 0;
} //another and a beautiful method - after cin >> n;
  //int a = 1;
  //for (int i=1; i<=n; i++) {
  //     cout << a << " ";
  //     a = a+2;
  //   }