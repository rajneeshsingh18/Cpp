#include <iostream>
using namespace std;

// 1234
//  123
//   12
//    1

int main(){
    
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    for(int row=1;row<=n;row++){

        for(int space=row-1;space;space--){
            cout<<" ";
        }

        for(int col=1;col<=n-row+1;col++){
            cout<<col;
            // start++;
        }
        cout<<endl;
    }
    return 0;
}