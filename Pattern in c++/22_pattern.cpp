#include <iostream>
using namespace std;

// 1234
//  234
//   34
//    4

int main(){
    
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    for(int row=1;row<=n;row++){

        for(int space=row-1;space;space--){
            cout<<" ";
        }
        
         int start=row;
        for(int col=1;col<=n-row+1;col++){
           
            cout<<start;
            start++;
        }
        cout<<endl;
    }
    return 0;
}