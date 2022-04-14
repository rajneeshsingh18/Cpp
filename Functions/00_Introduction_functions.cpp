#include <iostream>
#include <cmath> //All functions inside this Standard library function are called global function e.g --> sqrt() , ceil(), cos(), exp() , floor() , pow(x,y) , log10() etc.
using namespace std;



//maximum() function prototype

int maximum(int x , int y , int z){
    int maximumvalue=x;

    if(y>maximumvalue){
        maximumvalue=y;
    }

    if(z>maximumvalue){
        maximumvalue=z;
    }

    return maximumvalue;

}

int main(){ //main() is a global function

    // double a=13.0 , b=3.0 , c=4.0;
    // cout<<"Square root of given equation is "<<sqrt(a+(b*c))<<endl;
    // cout<<"Square root of 900 is " <<sqrt(900.0)<<"\n";


    int num1 , num2 , num3;
    cout<<"Enter three integer : ";
    cin>> num1 >> num2 >> num3;

    //invoke or calling a function as a boss
    cout<<"The maximum integer value is : " << maximum(num1,num2,num3)<<endl;


    return 0;
}