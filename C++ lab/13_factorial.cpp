#include <iostream>
using namespace std;

int main(){

    int num,fact=1;
    cout<<"Enter the number : ";
    cin>>num;

    if(num<0){
        cout<<"Factorial of negative number "<<num<<" not exist";
    }
    else if(num<=1){
        cout<<"Factorial of "<<num <<" is "<< fact;
    }
    else{

        for(int count=num;count>=2;count--){  // factorial  count    e.g for num=3
            fact=fact*count;                  //   1         3   = 3
        }                                     //   3         2   = 6
                                              //   6         <2  = loop exit
        cout<<"Factorial of "<<num <<" is "<< fact;
        }
    return 0;
    
}