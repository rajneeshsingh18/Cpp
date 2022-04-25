#include <iostream>
using namespace std;

class  Complex{

    int real;
    int imag;

    public:
         Complex(void);//default constructor decalration
        
         Complex(int , int );//parametrized constructor decalration

            void printnumber(){
                cout<<"Complex number is : "<<real <<"+"<<imag<<"i"<<endl;
            }

};

Complex::Complex(void){
    real=imag=0;
}


Complex::Complex(int r , int i){
    real=r;
    imag=i;
}

int main(){

   //Implicit Call
    Complex c1;
    c1.printnumber();

    Complex c2(211,3);
    c2.printnumber();

   //explicit call
    Complex c3= Complex(2,3);
    c3.printnumber();

    

    return 0;
}