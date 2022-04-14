//Ques3. WAP to find out whether a number is prime or not

#include <iostream>
using namespace std;

int main(){
    int num ;
    bool isprime= true;

    cout<<"Enter a positive number : ";
    cin>>num;
    
    //As we know 0 and 1 prime numbers
    if(num==0 || num == 1){
        isprime=false;
    }

    else{
        for(int i=2; i<=num/2 ; i++){
            if(num%i==0){
                isprime=false;
                break;
            }
        }
    }

    if(isprime){
        cout<<num<<" is a prime number .";
    }
    else{
        cout<<num<<" is not a prime number.";
    }
    return 0;
}
