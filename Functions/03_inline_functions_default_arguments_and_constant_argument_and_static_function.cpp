#include <iostream>
using namespace std;


//Inline function
inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0;  //this excutes only once
    // c=c+1; // Next time this function is run, the value of c will be retained
    // return (a*(b+c)); 
    return a*b;
}

float moneyrecived(int moneyyouhave , float interestyourecieve=1.04){ //default argument
     return moneyyouhave*interestyourecieve;
}

//Constant Arguments Example
int strlen(const char *p){
    }

int main(){

    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<"The Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;

    cout<<""<<endl;
    cout<<""<<endl;

    int moneyyouhave;
    cout<<"Enter the amount of money you have : ";
    cin>>moneyyouhave;
    cout<<"If you are normal person having a RS."<<moneyyouhave<<" then money you get after 1 year is Rs. "<<moneyrecived(moneyyouhave)<<endl;
    cout<<"If you are normal VIP having a RS."<<moneyyouhave<<" then money you get after 1 year is Rs. "<<moneyrecived(moneyyouhave,1.1)<<endl;

    

    return 0;
}