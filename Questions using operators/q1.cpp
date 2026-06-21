#include <iostream>                      //Write a program to count digits of a given number.
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int count = 0;
    while (n>0) {
        n = n/10;            //This will perform integer division!!!
        count ++;
    }

    cout << "The number of digits is: " << count ;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // int i =1;           <- my approach
    // while(i>0) {
    //     if ((n/10)  < 1) {
    //         cout << "The no. of digits in the number is: " << i << endl;
    //     break;
    //     } 
    //     i++;
    // }

    return 0;
}