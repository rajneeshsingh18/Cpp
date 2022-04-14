#include <iostream>
using namespace std;


//    1
//   121
//  12321
// 1234321

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    
   

     for(int row=1;row<=n;row++){
         
         //space print karo(1st triangle)
         for(int space=n-row;space;space--){
             cout<<" ";
         }

         //2nd triangle
         for(int col=1;col<=row;col++){
             cout<<col;
         }
         
         //3rd triangle
         for(int start=row-1;start;start--){
             cout<<start;
         }
         cout<<endl;
     }
    return 0;
}