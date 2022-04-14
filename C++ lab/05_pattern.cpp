#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of  n: ";
    cin >> n;

    for(int rows = 1; rows <= n; ++rows)
    {
        for(int col = 1; col <= rows; ++col)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}