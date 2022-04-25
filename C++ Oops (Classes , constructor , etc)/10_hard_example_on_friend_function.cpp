#include <iostream>
using namespace std;

class C2;

class C1{
    float val1;
      public:
            void indata( float a){
                val1=a;
            }    
               
               void display(){
                   cout<<val1<<endl;
               }

               friend void exchange( C1 & , C2 &);
};

class C2{
    float val2;
      public:
            void indata( float b){
                val2=b;
            }
            void display(){
                cout<<val2<<endl;
            }

               friend void exchange( C1 & , C2 &);

};


void exchange( C1 &x , C2 &y){
    float temp;
    temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){


    C1 obj1;
    C2 obj2;

    obj1.indata(21);
    cout<<"The value of c1 before exchanging :";
    obj1.display();

    obj2.indata(12);
    cout<<"The value of c2 before exchanging :";
    obj2.display();

    exchange( obj1, obj2);

    cout<<"The value of c1 after exchanging :";
    obj1.display();

     cout<<"The value of c2 after exchanging :";
    obj2.display();

    return 0;
}