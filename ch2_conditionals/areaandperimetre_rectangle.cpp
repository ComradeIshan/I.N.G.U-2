#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: " ;
    cin >> b;
    int area = l * b;
    int perimetre = 2 * (l + b);
    if (area > perimetre) {
        cout << "The area is " << area << " and Area is greater than the perimetre.";
    } else {
        cout << "The perimetre is "<< perimetre << " and Perimetre is greater than area.";
    }
    return 0;
}