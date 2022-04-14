#include <iostream>
using namespace std;


    // int sum(int a ,int b){
    //     int c=a+b;
    //     return c;
    // }

   // Function prototype or function declartaion
    // type function-name(arguments);
    int sum(int a , int b); //-->Acceptable
    //int sum( int , int);  //-->Acceptable
    // int sum(int a , b);  //-->Not Acceptable

    void helloworld(void);
    // void helloworld();


int main(){

    int num1, num2;
    cout<<"Enter the first and second numbers : ";

    cin>>num1>>num2;
    
    //num1 and num2 are actual parameters
    cout<<"The sum is " <<sum(num1,num2);

    helloworld();

 

    return 0;
}

int sum(int a ,int b){
    // a and b are formal parameter taking values from actual parameters num1 and num2.
        int c=a+b;
        return c;
    }

void helloworld(){
    cout<<"\n Hello world! I am Rajneesh";
}