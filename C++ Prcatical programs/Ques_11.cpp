/*Ques_11. Write a menu-driven program to :-
           ● Find out the factorial of a number
           ● Determine if the given number is prime
           ● Generate Fibonacci series upto n limit
           ● Check if a number is armstrong number
           ● Generate prime fibonacci number upto given limit n
           ● Maximum of three integers using ternary operators
           ● Reverse an integer.
*/

#include <iostream>
#include <conio.h>
using namespace std;

// factorial() function definition
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// checkPrimeNumber() function definition
int checkPrimeNumber(int num)
{
    int i, chk = 0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            chk++;
            return chk;
        }
    }
    return chk;
}

// fibonacci() function defination
void fibonacci(int n)
{
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++)
    {

        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
}

// CheckArmstrong() function defination
void CheckArmstrong(int n)
{
    int num = 0;
    int o, rem;
    o = n;

    while (o > 0)
    {
        rem = o % 10;                // 3  5  1
        num = num + rem * rem * rem; // 0+3*3*3=27  27+5*5*5=152   152+1*1*1=153
        o = o / 10;                  // 15   1
    }

    if (n == num)
    {
        cout << "Armstrong number.";
    }
    else
    {
        cout << "Not armstrong number.";
    }
}

// primeFibonacci() function definition
void primeFibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c = a + b;
    cout << "Prime Fibonacci series: " << endl;
    while (c <= n)
    {
        if (checkPrimeNumber(c))
            cout << c << endl;
        a = b;
        b = c;
        c = a + b;
    }
}

// maxNum() function definition
int maxNum(int num1, int num2, int num3)
{
    int max;
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    return max;
}

// reverse() function definition

int reverse(int number)
{
    int remainder, revNumber = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        revNumber = (revNumber * 10) + remainder;
    }
    return revNumber;
}
int main()
{
    int choice;
    char option = 'Y';
    do
    {
        int num1, num2, num3;
        int max ;
        int n;
        cout << "\n\n"
             << "*************** MENU *************** "
             << "\n\n";
        cout << "1. Find out the factorial of a number" << endl;
        cout << "2. Determine if the given number is prime" << endl;
        cout << "3. Generate Fibonacci series upto n limit" << endl;
        cout << "4. Check if a number is armstrong number" << endl;
        cout << "5. Generate prime fibonacci number upto given limit n" << endl;
        cout << "6. Maximum of three integers using ternary operators" << endl;
        cout << "7. Reverse an integer." << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a number: " << endl;
            cin >> n;
            cout << "Factorial : " << factorial(n);
            break;

        case 2:
            int num;
            cout << "Enter a Number: " << endl;
            cin >> num;
            if (checkPrimeNumber(num))
            {
                cout << num << " is a prime number." << endl;
            }
            else
            {
                cout << num << " is not a prime number." << endl;
            }
            break;

        case 3:
            cout << "Enter n : " << endl;
            cin >> n;
            if (n <= 0)
            {
                cout << "Enter positive non-zero number" << endl;
                break;
            }
            fibonacci(n);
            break;

        case 4:
            cout << "Enter a number: " << endl;
            cin >> n;
            if (n < 0)
            {
                cout << "Enter positive number" << endl;
                break;
            }
            CheckArmstrong(n);
            break;

        case 5:
            cout << "Enter limit: " << endl;
            cin >> n;
             if (n < 0)
            {
                cout << "Enter positive number" << endl;
                break;
            }
            primeFibonacci(n);
            break;

        case 6:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Enter third number: ";
            cin >> num3;
            max = maxNum(num1, num2, num3);
            cout << "Maximum among three number is  " << max << endl;
            break;

        case 7:
            cout << "Enter an integer: " << endl;
            cin >> n;
            cout << "\nOriginal number: " << n << endl;
            cout << "\nReversed integer : " << reverse(n) << endl;
            break;

        case 8:
            cout << "EXIT!!" << endl;
        default:
            cout << "Wrong Input !! .. Enter right choice" << endl;
            break;
        }
        cout << "\nDo you wish to continue: " << endl;
        cin >> option;
        getch();
    } while (option == 'y' || option == 'Y');

return 0;
}