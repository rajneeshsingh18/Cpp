#include <iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter a number : ";
    cin>>number;
    
    cout<<"\n";
    
    if(number>0){
        cout<<number<<" is Positive number."<<endl;
    }
    else
        if(number<0){
            cout<<number<<" is negative number."<<endl;
        }
        else{
            cout<<"Zero";
        }
    return 0;
}