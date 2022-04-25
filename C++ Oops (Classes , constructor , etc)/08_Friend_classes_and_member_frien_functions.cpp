#include <iostream>
using namespace std;

class Complex; //as forward declaration

class Calculator{
    public:

    float add(int a , int b){
        return(a+b);
    }

    float sumrealpart(Complex , Complex);
    float sumimagpart(Complex, Complex);
    
    

};

class Complex{
    float real;
    float imag;
    

    //indiviually decaling functions as friends 
    friend float Calculator ::sumrealpart(Complex,Complex);
    friend float Calculator ::sumimagpart(Complex,Complex);

    //entire calculator class as friend
    friend class Calculator;

    public:
            void setnumber( float r , float i){
                real=r;
                imag=i;
            }

            void printnumber(){
                cout<<"Complex number is "<<real<<"+"<<imag<<"i"<<endl; 
            }
 
};

float Calculator::sumrealpart(Complex o1, Complex o2){
    return (o1.real+o2.real);
}

float Calculator::sumimagpart(Complex o1, Complex o2){
    return (o1.imag+o2.imag);
}

int main(){

    Complex c1 , c2;
    c1.setnumber(2.1,3.4);
    c1.printnumber();

    c2.setnumber(1.9,1.6);
    c2.printnumber();

    Calculator calc;

    float resl_real_part=calc.sumrealpart(c1,c2);
    cout<<"The sum of real part of c1 and c2 is  "<<resl_real_part<<endl;

    float resl_imag_part=calc.sumimagpart(c1,c2);
    cout<<"The sum of imag part of c1 and c2 is  "<<resl_imag_part<<endl;


    return 0;
}