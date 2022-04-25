#include <iostream>
using namespace std;

class Complex{

    float real , imag;

    public: 
            //consructor declaration
            Complex(void);

            void printnumber(){
                cout<<"Your number is : "<<real <<"+"<<imag<<"i"<<endl;
            }

};


//default contructor 
Complex :: Complex(void){
    real=0;
    imag=0;
}

int main(){
      Complex c1 , c2 ;
      Complex c3;
      c1.printnumber();
      c2.printnumber();
      c3.printnumber();

    return 0;
}