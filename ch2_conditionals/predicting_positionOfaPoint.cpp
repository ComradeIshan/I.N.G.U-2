#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x>0 && y>0) {
        cout << "It lies in the 1st quadrant.";
    } else if (x<0 && y<0) {
        cout << "It lies in the 3rd quadrant.";
    } else if (x>0 && y<0) {
        cout << "It lies in the 4th quadrant.";
    } else if (x<0 && y>0) {
        cout << "It lies in the 2nd quadrant.";
    } else if (x==0 && y==0) {
        cout << "It lies at origin.";
    } else if (x==0 && y!=0) {
        cout << "It lies at the y axis.";
    } else if (y==0 && x!=0) {
        cout << "It lies at the x axis.";
    }

    return 0;
}