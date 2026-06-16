#include <iostream>
using namespace std;

int main()
{
    int costPrice, sellingPrice;
    cout << "Enter the cost price: ";
    cin >> costPrice;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;
    if (sellingPrice > costPrice) {    //revise 
        cout << "Your profit is " << sellingPrice - costPrice;
    } else if (sellingPrice < costPrice) {
        cout << "Your loss is " << costPrice - sellingPrice;
    } 
       else {
        cout << "You didn't made any Profit, sorry." ;
    }
    return 0;
} 