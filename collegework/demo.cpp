#include <iostream>
using namespace std;

int main()
{
    int arr[22];

    cout << "Enter 22 numbers:\n";

    // Input
    for(int i = 0; i < 22; i++)
    {
        cin >> arr[i];
    }

    // Ascending Order
    for(int i = 0; i < 21; i++)
    {
        for(int j = i + 1; j < 22; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nAscending Order:\n";
    for(int i = 0; i < 22; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nDescending Order:\n";
    for(int i = 21; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}