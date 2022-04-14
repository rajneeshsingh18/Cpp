#include <iostream>
using namespace std;

// Program to check if a triangle is scalene, isosceles or equilateral

int main(){
    float a,b,c;
    cout<<"Enter lenght of three sided triangle : ";
    cin>>a>>b>>c;

    if(a!=b && b!=c && c!=a){
        cout<<"Scalene triangle";
    }
    else if ( a==b && b==c && c==a ){
        cout<<"Equilatreal triangle";
    }
    else{
        cout<<"Isosceles triangle";
    }
    return 0;
}