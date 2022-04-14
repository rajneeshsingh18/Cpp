//Ques_10. Find the greatest of three numbers using ternary operators.

#include <iostream>
using namespace std;

int main(){

    int num1 , num2 , num3;

    cout<<"\n\nEnter First number :";
    cin>>num1;
    cout<<"Enter Second number : ";
    cin>>num2;
    cout<<"Enter Second number : ";
    cin>>num3;

    int max;
    //condition ? value if true : value if false  --> Ternary opertor 
    max = (num1>num2) ? (num1>num3 ? num1 : num3) : (num2>num3 ? num2 : num3);

    cout<<"\nMaximum among three numbers is "<<max<<"\n"<<endl;

    

    return 0;
}