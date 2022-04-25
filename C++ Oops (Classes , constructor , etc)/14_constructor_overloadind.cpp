#include <iostream>
using namespace std;

class Complex{

    int real;
    int imag;

    public:

        Complex(void){
            real=imag=0;
        }

        Complex(int r , int i ){
            real=r;
            imag=i;
        }

        Complex(int x){
            real=x;
            imag=0;
        }

        void printnumber(){
                cout<<" Complex number is : "<<real <<"+"<<imag<<"i"<<endl;
            }



};

int main(){


    Complex c1;
    c1.printnumber();

     Complex c2(3);
    c2.printnumber();

     Complex c3(2,6);
    c3.printnumber();

    return 0;
}