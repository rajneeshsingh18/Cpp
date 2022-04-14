#include <iostream>
//#include <math.h> //stores pow() function
using namespace std;

int main(){
    
    // 153 = 1*1*1 + 5*5*5 + 3*3*3 =153

    int n,o,rem;
    int num=0;

    cout<<"Enter the number : ";
    cin>>n;

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
    return 0;
}