#include <iostream>
using namespace std;

int main(){

    //an array with five element 
    double balance[5]={1000.3,342.34,24.24,543.34,34.3};

    double *p;

    p=balance;

    //output each array elements value using pointer 

    cout<<"Array value using pointer : "<<endl;

    for ( int i=0; i<5 ; i++){
        cout<<"*(p + " << i <<") : ";
        cout<<*(p+i)<<endl;
    }

    cout<<"Arrays values using balance as address"<<endl;

    for(int i=0; i<5; i++){
        cout << "*(balance + "<<i<<" ) : ";
        cout<<*(balance+i)<<endl;
    }
    return 0 ;
}
