#include <iostream>
// #include <cmath>
using namespace std;

//function prototype
// int power(int , int);


//power() function declaration

int power(int x,int y){
// int power(){
      
    //   int x ,y;
    //  cout<<"Enter the x raise to power of y : ";
    // cin>>x>>y;

      int ans=1;
      
     for(int i=1;i<=y;i++){
        ans=ans*x;
    }
     
     return ans;

}

int main(){    

    // int ans=power();
    // cout<<"x raise to powr of y is  : " <<ans <<endl;

    // cout<<"x raise to powr of y is  : " <<power() <<endl;

    // cout<<"x raise to powr of y is  : " <<power() <<endl;

    // cout<<a<<" raise to power of "<<b<<" is : "<<power()<<"\n"; 


    int d , e;
    cout<<"Enter the a raise to power of b : ";
    cin>>d>>e;
    cout<<d<<" raise to power of "<<e<<" is : "<<power(d,e); 


    return 0;
}


