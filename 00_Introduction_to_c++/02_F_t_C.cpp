#include <iostream>
using namespace std;

int main(){


    // Convert Fahrenheit to degree C

     int f, c;
     cout<<"Enter temperature in fahrenheit : ";
     cin>>f;
     c= 5*(f-32)/9;
     cout<<c<<" degree C"<<endl;    

    return 0;
}