#include <iostream>
using namespace std;

//function definition 
double getAverage( int arr[], int size){
    int i , sum=0;
    double avg;

    for( int i=0; i<size;i++){
        sum = sum + arr[i];
    }

    avg= double( sum)/size ;

    return avg ; 
}

int main(){
    
    //an int array with 5 elements 
    int balance[5]={1000,3,4,1,5};
    double avg ;

    //calling function 
    // pass pointer to a array as an argument 

    avg= getAverage(balance,5);

    //output the returned value

    cout<<"Average value is : "<<avg<<endl;
    


    return 0;
}