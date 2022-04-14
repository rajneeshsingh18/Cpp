#include <iostream>
using namespace std;

//  Program to find the maximum among three numbers

int main(){

    int n1,n2,n3;
    cout<<"Enter Three Numbers : "<<endl;
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3){
        cout<<n1<<" is maximum";
    }
    else if (n2>n3 && n2>n1){
        cout<<n2<<" is Maximum";
    }
    else{
        cout<<n3<<" is maximum";
    }
    return 0;
}