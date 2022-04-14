/* Write a menu-driven program to perform matrix algebra.
● Addition
● Substraction
● Transpose
● Multiplication
*/

#include <iostream>
#include <conio.h>
using namespace std;

void readmatrix(int rows, int cols, int matrix[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void displaymatrix(int rows, int cols, int matrix[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void addmatrix(int rows, int cols, int matrix1[][10], int matrix2[][10], int result[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void submatrix(int rows, int cols, int matrix1[][10], int matrix2[][10], int result[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void transposeMatrix(int rows, int cols, int matrix1[][10], int result[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[j][i];
        }
    }
}

void multiplyMatrix(int matrix1[][10], int r1, int r2, int matrix2[][10],
                    int c1, int c2, int result[][10])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < r2; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
                result[i][j] = sum;
            }
        }
    }
}

int main()
{
    int matrix1[10][10];
    int matrix2[10][10];
    int result[10][10];

    int choice;
    int rows, cols;

    char option;

    do
    {
        cout << "📝 MENU: " << endl;
        cout << "1. Matrix Addition." << endl;
        cout << "2. Matrix Substraction." << endl;
        cout << "3. Matrix Transpose." << endl;
        cout << "4. Matrix Multiplication." << endl;
        cout << "💡 Enter your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter rows and cols: " << endl;
            cin >> rows;
            cin >> cols;
            cout << "Enter first matrix: " << endl;
            readmatrix(rows, cols, matrix1);
            cout << "Enter second matrix: " << endl;
            readmatrix(rows, cols, matrix2);
            addmatrix(rows, cols, matrix1, matrix2, result);
            cout << "Result : " << endl;
            displaymatrix(rows, cols, result);

            break;

        case 2:
            cout << "Enter rows and cols: " << endl;
            cin >> rows;
            cin >> cols;
            cout << "Enter first matrix: " << endl;
            readmatrix(rows, cols, matrix1);
            cout << "Enter second matrix: " << endl;
            readmatrix(rows, cols, matrix2);
            submatrix(rows, cols, matrix1, matrix2, result);
            cout << "Result : " << endl;
            displaymatrix(rows, cols, result);
            break;

        case 3:
            cout << "Enter rows and cols: " << endl;
            cin >> rows;
            cin >> cols;
            cout << "Enter first matrix: " << endl;
            readmatrix(rows, cols, matrix1);
            transposeMatrix(rows, cols, matrix1, result);
            cout << "Result : " << endl;
            displaymatrix(rows, cols, result);
            break;

        case 4:
            int r1, r2, c1, c2;

            cout << "Enter first matrix rows and cols: " << endl;
            cin >> r1;
            cin >> c1;
            cout << "Enter first Matrix Elements: " << endl;
            readmatrix(r1, c1, matrix1);
            cout << "Enter second matrix rows and cols: " << endl;
            cin >> r2;
            cin >> c2;
            cout << "Enter second Matrix Elements: " << endl;
            readmatrix(r2, c2, matrix2);
            if (r2 != c1)
            {
                cout << "Cannot multiply matrices..." << endl;
            }
            else
            {
                multiplyMatrix(matrix1, r1, c1, matrix2, r2, c2, result);
                cout << "Resultant Matrix: " << endl;
                displaymatrix(c1, r2, result);
            }
            break;

        default:
            cout << "❌ Wrong choice. Please Try again!" << endl;
        }

        cout << "Do you wish to continue??" << endl;
        cin >> option;
        // system("clear");
        getch();
    } while (option == 'y' || option == 'Y');

    return 0;
}