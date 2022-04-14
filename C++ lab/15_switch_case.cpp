#include <iostream>
#include <cmath>
using namespace std;

//function declaration
bool Prime(int);

//max() function definition
int max(int a, int b, int c){
    if((a>b) && (a>c)){
        return a;
    }
    else if ( (b>a) && (b>c)){
        return b;
        
    }
    else{ return c;}

}


//fibonacci() function defination

void fibonacci(int n){
    int  first = 0, second = 1, next;

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


//factorial() function defination
void factorial(int num){
    
    int fact=1;

    if(num<0){
        cout<<"Factorial of negative number "<<num<<" not exist";
    }
    else if(num<=1){
        cout<<"Factorial of "<<num <<" is "<< fact;
    }
    else{

        for(int count=num;count>=2;count--){  // factorial  count    e.g for num=3
            fact=fact*count;                  //   1         3   = 3
        }                                     //   3         2   = 6
                                              //   6         <2  = loop exit
        cout<<"Factorial of "<<num <<" is "<< fact;
        }

}

//armstrong() function defination
void Armstrong(int n){
    int num=0;
    int o,rem;
    o=n;

    while(o>0){
        rem=o%10; //3  5  1
        num =num + rem*rem*rem; // 0+3*3*3=27  27+5*5*5=152   152+1*1*1=153
        o=o/10;  //15   1
    }

    if(n==num){
        cout<<"Armstrong number.";
    }
    else{
        cout<<"Not armstrong number.";
    }

}


int main()
{
       

    int choice;

    do{  
        cout << "...........MENU............" << endl;
    cout << "1. Checking prime number " << endl;
    cout << "2. Fibonacci Series " << endl;
    cout << "3. Factoriial of number " << endl;
    cout << "4. Checking number is armstrong or not  " << endl;
    cout << "5. Maximum of three numbers " << endl;
    cout << "6. Exit "<<endl;

    cout << "Enter your Choice : " << endl;
    cin >> choice;

    switch (choice){
    case 1:  
      
    //   int n;
    // cout << "Enter a positive  integer: ";
    // cin >> n;

    // if (Prime(n))
    //     cout << n << " is a prime number.";
    // else
    //     cout << n << " is not a prime number."; 
    //          break;

    case 2:
        int n;
        cout << "Enter no. of terms for series : ";
        cin >> n;
        fibonacci(n);
        break;

    case 3:   
        int num;
        cout<<"Enter the number : ";
        cin>>num;
        factorial(num);
        break;

    case 4:  
        
        cout <<"Enter a number : ";
        cin>>n;
        Armstrong(n);
        break;

    case 5:
    int num1, num2 , num3 ;
    cout<<"Enter three integer number  : ";
    cin>>num1>>num2>>num3;
    
    cout<<"Largest among three numbers is : "<<max(num1,num2,num3)<<endl;
    break;
      
    case 6:
    cout<<"..........Exited successfully...........";
    break;

    default:
        cout<<"Wrong Input Try to enter correct choice"<<endl;
        break;
    }
        
    } while (choice != 6);
    

}


//Prime() function defination
bool Prime(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
