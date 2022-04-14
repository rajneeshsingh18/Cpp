//Ques4. WAP to find out and print the factors of a number.
#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a positive integer: ";
    cin>> num ;
    
    int count=0;
    cout << "The factors of " << num << " are : ";
    for( int i=1 ; i<=num ; i++){
        if(num%i==0){
            cout<<i<<" ";
            count++;
        }
    }

     cout<<"\n";
    cout<<"Total factors of "<<num<< " are "<<count <<endl;
    return 0 ;
}