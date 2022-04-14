//Ques7. WAP to find the armstrong numbers within a range.
#include <iostream>
#include <stdio.h>
#include "cmath"

using namespace std ;
int main()
{
    int lower, upper, i, temp1, temp2, rem, num = 0;
    float sum_pow = 0.0;
    /* Accept the lower and upper range from the user */
    cout<<"Enter lower range :";
    cin>>lower;
    cout<<"Enter upper range :";
    cin>>upper;

    int count=0;
   

    cout<<"Armstrong numbers between " << lower <<" and " << upper <<" are: ";

    for (i = lower + 1; i < upper; ++i)
    {
        temp1 = i;
        temp2 = i;

        // calculate number of digits
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++num;
        }

        // calculate sum of nth power of its digits
        while (temp2 != 0) {
            rem = temp2 % 10;
            sum_pow += pow(rem, num);
            temp2 /= 10;
            
        }

        // check if it is an Armstrong number
        if ((int)sum_pow == i) {
            cout<<i<<" ";
            count++;
        }

        num = 0;
        sum_pow = 0;
    }
    
    cout<<endl;
    cout<<"There are total "<<count<<" armstrong number between "<<lower << " to "<<upper;
    return 0;
}