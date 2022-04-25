#include <iostream>
using namespace std;

class Complex{

    int real;
    int imag;

    public:

         void setdata( int r , int i ){
             real=r;
             imag=i;
         }

         void addcomplex( Complex o1 , Complex o2){

             real=o1.real+o2.real;
             imag=o1.imag+o2.imag;

         }

         void displayComplex(void){
             cout<<"complex number is "<<real<<"+"<<imag<<"i"<<endl;
         }


};


int main(){
    float a,b,c,d;
    cout<<"Enter the real part of 1st complex number : ";
    cin>>a;
    cout<<"\nEnter the imaginary part of 1st complex number : ";
    cin>>b;
     cout<<"Enter the real part of 2st complex number : ";
    cin>>c;
    cout<<"\nEnter the imaginary part of 2st complex number : ";
    cin>>d;
    Complex c1,c2,c3;
    
    //passing objects as aruguments in function
    c1.setdata(a,b);
    c1.displayComplex();
    
    c2.setdata(c,d);
    c2.displayComplex();

    c3.addcomplex(c1,c2);
    c3.displayComplex();





    return 0;
}