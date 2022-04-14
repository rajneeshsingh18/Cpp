#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // 1st triangle
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << col;
        }
        // 2nd triangle
        for (int star = 1; star = (2 * row - 2); star--)
        {
            cout << "*";
        }

        // 3rd triangle

        // for (int col = col - 1; col; col--)
        // {
        //     cout << col;
        // }
        cout << endl;
    }
    return 0;

//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= (n - row + 1))
//         {
//             cout << col;
//             col = col + 1;
//         }
//         int star = (2 * row) - 2;
//         while (star)
//         {
//             cout << "*";
//             star = star - 1;
//         }
//         col = col - 1;
//         while (col)
//         {
//             cout << col;
//             col = col - 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
 }