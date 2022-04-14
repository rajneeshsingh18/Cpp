#include <iostream>
using namespace std ;

//function prototype
int max(int ,int ,int );

int main(){
    int num1, num2 , num3 ;
    cout<<"Enter first number  : ";
    cin>>num1;

    cout<<"Enter second number  : ";
    cin>>num2;

    cout<<"Enter third number  : ";
    cin>>num3;
    
    int Maximum;
    Maximum=max(num1,num2,num3);
    cout<<"Largest among three numbers is : "<<Maximum<<endl;
    return 0;

}


//max() function definition
int max(int a, int b, int c){
    if((a>b) && (a>c)){
        return a;
    }
    else if ( (b>a) && (b>c)){
        return b;
        
    }
    else{
        return c;}
}

