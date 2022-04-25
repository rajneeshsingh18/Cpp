#include <iostream>
using namespace std;


class Complex{

    float real;
    float imag;

    public:
           friend Complex Sumcomplex( Complex o1 , Complex o2);

           void setnumber(float r , float i ){
               real=r;
               imag=i;
           }

           void printnumber(void){
               cout<<"Complex number eneterd : "<<real<<"+"<<imag<<"i"<<endl;
           }

};

//cannot access real and imag as they are private data member of class Complex 
Complex Sumcomplex( Complex o1 , Complex o2){
    Complex o3;

    o3.setnumber((o1.real+o2.real),(o1.imag+o2.imag));
    return o3;
}

int main(){
    
    Complex c1,c2,sum;

    c1.setnumber(2,5);
    c1.printnumber();

    c2.setnumber(3,4);
    c2.printnumber();

    sum=Sumcomplex(c1,c2);
    sum.printnumber();
    return 0;
}