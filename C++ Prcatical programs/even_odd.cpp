//  program to check if given integer is even or odd
#include<iostream>
using namespace std;
 
int main()
{
    int num, remainder;
 
    cout << "Enter the number : ";
    cin >> num;

    remainder = num % 2;

    if (remainder == 0)
        cout << num << " is an even number " << endl;
    else
        cout << num << " is an odd number " << endl;
 
    return 0;
}