#include <iostream>
using namespace std;


int sum( int a, int b){
    int c = a + b;
    return c;
}

//Call by Value Swap Function
// This will not swap a and b
void swap( int a , int b ){
    int temp=a;
    a=b;
    b=temp; 
}

// Call by reference using pointers
void swapPointer(int *a, int *b){ //temp a b
    int temp = *a;                 //4   4  5   
    *a = *b;                       //4   5  5
    *b = temp;                     //4   5  4 
}


//  Call by Reference Swap Function using c++ reference variable
// int & swapReferenceVar( int &a , int &b){
void swapReferenceVar( int &a , int &b){
    int temp=a;
    a=b;
    b=temp;
    // return a;
}

int main(){
     
    //call by value
    cout<<"The sum of 4 and 5 is : "<<sum(4,5)<<endl;

    // Passing Values to Swap Function
     int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

     // Passing Values to Swap Function
    //  swap(x, y); 

     // Passing Values to SwapPointer Function
    //  swapPointer(&x,&y);  //This will swap a and b using pointer reference

     // Passing Values to SwapReferenceVar Function
     swapReferenceVar(x, y); //This will swap a and b using reference variables
    //  swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

    return 0;
}