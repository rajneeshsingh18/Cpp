#include <iostream>
using namespace std ;

// . Program to check if a number is even or odd

int main(){

    int num;
    cout << "Enter a number : ";
    cin>>num;

    if(num%2==0){
        cout<<"Number is Even.";
    }

    else{
        cout<<" Number is Odd.";
    }
    return 0;

}