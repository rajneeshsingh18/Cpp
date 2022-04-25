#include <iostream>
using namespace std;

class Y;

class X{
    int num1 ;

    public:
         void setValue( int value ){
             num1=value;
         }
      
         friend void add( X, Y);

    


};

class Y{
    int num2 ;

    public:
         void setValue( int value ){
             num2=value;
         }

         friend void add( X, Y);

};

void add( X o1 , Y o2){
    cout<<"Summing data of X and Y objects gives me "<<o1.num1+o2.num2<<endl;
}



int main(){

    X a;
    a.setValue(21);

    Y b;
    b.setValue(19);

    add(a,b);

    return 0;
}