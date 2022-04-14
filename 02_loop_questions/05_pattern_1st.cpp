#include <iostream>
using namespace std;

int main(){
     
     int n;
     cout<<"Enter the value of n : ";
     cin>>n;

     /* int i=1;
     while(i<=row){
         int col=1;
         while(col<=row){
             cout<<"*";
             col++;
         }
         cout<<endl;
         i++;
     } */

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}