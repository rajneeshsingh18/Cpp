#include <iostream>
using namespace std;

// . Program to find maximum, minimum among two numbers

int main(){
    int num1 , num2;
    cout<<"Enter Two Numbers : ";
    cin>>num1;
    cin>>num2;

    if(num1>num2){
        cout<<num1<<" is Greater than "<<num2;
    }
    else{
        cout<<num2<<" is Greater than "<<num1;
    }
    return 0;
}