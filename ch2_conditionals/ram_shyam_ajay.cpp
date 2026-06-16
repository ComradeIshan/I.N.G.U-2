#include <iostream>
using namespace std;              //Solve only by nested if-else. I have to find the youngest of them.

int main()
{
    int Ram, Shyam, Ajay;
    cout << "Enter the age of Ram: ";
    cin >> Ram;
    cout << "Enter the age of Shyam: ";
    cin >> Shyam;
    cout << "Enter the age of Ajay: ";
    cin >> Ajay;

    if (Ram < Shyam) {
        if (Ram < Ajay) {
            cout << "Ram is the youngest person.";
        } else {
            cout << "Ajay is the youngest person.";
        }
    } else {
        if (Shyam < Ajay) {
            cout << "Shyam is the youngest person.";
        } else {
            cout << "Ajay is the youngest person.";
        }
    }
    return 0;
}