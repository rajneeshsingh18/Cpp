/*
Ques_31. Write a program for matrix algebra. You have to define a class matrix with the following
data members :
The 2D array , rows and columns
Write a default constructor and a parametrised constructor.
Write functions to add , multiply 2 matrices
To display a matrix , and to find the transpose of a matrix.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void design(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "*";
    }
}

class matrix
{
private:
    int row;
    int col;
    int list[20][20];

public:
    matrix()
    {
    }

    matrix(int r, int c)
    {
        this->row = r;
        this->col = c;
        int i, j;
        for (i = 0; i < this->row; i++)
        {
            for (j = 0; j < this->col; j++)
            {
                cout << "position "
                     << "[" << i << "," << j << "] = ";
                cin >> list[i][j];
            }

            this->list[this->row][this->col];
        }
    }

    void display()
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->col; j++)
            {
                cout << setw(5) << this->list[i][j];
            }
            cout << endl;
        }
    }

    void Tmatrix()
    {
        int temp, t;
        t = row;
        row = col;
        col = t;
        for (int i = 0; i < row; i++)
        {
            for (int j = i; j < col; j++)
            {
                temp = list[i][j];
                list[i][j] = list[j][i];
                list[j][i] = temp;
            }
        }
    }

    void Multiply(matrix m1, matrix m2)
    {
        if (m2.row != m1.col)
        {
            cout << "Cannot multiply matrices..." << endl;
        }
        else
        {
            this->row = m1.row;
            this->col = m2.col;

            for (int i = 0; i < m1.row; i++)
            {
                for (int j = 0; j < m2.col; j++)
                {
                    int sum = 0;
                    for (int k = 0; k < m2.row; k++)
                    {
                        sum += m1.list[i][k] * m2.list[k][j];
                        this->list[i][j] = sum;
                    }
                }
            }
        }
    }

    void add(matrix m1, matrix m2)
    {
        int i, j;
        this->row = m1.row;
        this->col = m2.col;
        if (m1.row == m2.row && m1.col == m2.col)
        {
            for (i = 0; i < m1.col; i++)
            {
                for (j = 0; j < m1.row; j++)
                {
                    list[i][j] = m1.list[i][j] + m2.list[i][j];
                }
            }
        }
        else
        {
            cout << "enter same row and column";
        }
    }

    void sub(matrix m1, matrix m2)
    {
        int i, j;
        this->row = m1.row;
        this->col = m2.col;
        if (m1.row == m2.row && m1.col == m2.col)
        {
            for (i = 0; i < m1.col; i++)
            {
                for (j = 0; j < m1.row; j++)
                {
                    list[i][j] = m1.list[i][j] - m2.list[i][j];
                }
            }
        }
        else
        {
            cout << "enter same row and column";
        }
    }
};
int main()
{
    int op;
    int r1, c1, r2, c2;
    do
    {
        design(25);
        cout << "-M-E-N-U-";
        design(25);
        cout << endl;
        cout << "1. For adding two matrix" << endl;
        cout << "2. For subtracting two matrix" << endl;
        cout << "3. For multipling two matrix" << endl;
        cout << "0. For Exit" << endl;
        cout << endl;
        design(60);
        cout << endl;
        cout << "enter our option = ";
        cin >> op;
        if (op < 4 && op > 0)
        {

            design(35);
            cout << "Instructions";
            design(35);
            cout << endl;
            cout << "* .  For addition and substraction row and column of two matrix must be equal" << endl;
            cout << "* .  For multiplication row of first matrix must be equql to the column of second matrix" << endl;
            cout << endl;
            design(80);
            cout << endl;
        }
        else
        {
            cout << "Enter the correct options " << endl;
        }
        switch (op)
        {
        case 1:
        {
            cout << "enter the row of matrix 1 = ";
            cin >> r1;
            cout << "enter the column of matrix 1 = ";
            cin >> c1;
            cout << "enter the row of matrix 2 = ";
            cin >> r2;
            cout << "enter the column of matrix 2 = ";
            cin >> c2;
            cout << " Enter the matrix 1 ";
            cout << endl;
            matrix m1(r1, c1);
            cout << " Enter the matrix 2 ";
            cout << endl;
            matrix m2(r2, c2);
            design(85);
            cout << endl;
            cout << " matrix 1 ";
            cout << endl;
            m1.display();
            cout << " matrix 2 ";
            cout << endl;
            m2.display();
            matrix m3;
            m3.add(m1, m2);
            cout << "Addition of matrix";
            cout << endl;
            m3.display();
            break;
        }
        case 2:
        {
            cout << "enter the row of matrix 1 = ";
            cin >> r1;
            cout << "enter the column of matrix 1 = ";
            cin >> c1;
            cout << "enter the row of matrix 2 = ";
            cin >> r2;
            cout << "enter the column of matrix 2 = ";
            cin >> c2;
            cout << " Enter the matrix 1 ";
            cout << endl;
            matrix m1(r1, c1);
            cout << " Enter the matrix 2 ";
            cout << endl;
            matrix m2(r2, c2);
            design(85);
            cout << endl;
            cout << " matrix 1 ";
            cout << endl;
            m1.display();
            cout << " matrix 2 ";
            cout << endl;
            m2.display();
            matrix m3;
            m3.sub(m1, m2);
            cout << "subtraction of matrix";
            cout << endl;
            m3.display();
            break;
        }
        case 3:
        {
            cout << "enter the row of matrix 1 = ";
            cin >> r1;
            cout << "enter the column of matrix 1 = ";
            cin >> c1;
            cout << "enter the row of matrix 2 = ";
            cin >> r2;
            cout << "enter the column of matrix 2 = ";
            cin >> c2;
            cout << " Enter the matrix 1 ";
            cout << endl;
            matrix m1(r1, c1);
            cout << " Enter the matrix 2 ";
            cout << endl;
            matrix m2(r2, c2);
            design(85);
            cout << endl;
            cout << " matrix 1 ";
            cout << endl;
            m1.display();
            cout << " matrix 2 ";
            cout << endl;
            m2.display();
            matrix m3;
            m3.Multiply(m1, m2);
            cout << "multiplication of matrix";
            cout << endl;
            m3.display();
            break;
        }
        case 0:
        {

            cout << "---E-X-I-T---";
            break;
        }
        }

        getchar();
        getchar();
        system("cls");
    } while (op != 0);
}
