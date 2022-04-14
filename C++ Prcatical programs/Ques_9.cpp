// Ques_9. Design a function to find out the factorial of a number and hence find the value of mCn.

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{

    int m, n;
    cout << "Enter the value of  m: " << endl;
    cin >> m;
    cout << "\nEnter the value of  n: " << endl;
    cin >> n;

    if (m < n || m < 0 || n < 0)
    {
        cout << "Entered the Wrong value !! " << endl;
        return 0;
    }

    double result = factorial(m) / (factorial(n) * factorial(m - n));
    cout << "\nm = " << m << endl;
    cout << "n = " << n << endl;
    cout << "\nmCn = " << result << endl;

    return 0;
}